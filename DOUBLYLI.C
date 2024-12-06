#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
struct node*prev;
}
*head=NULL,*temp=NULL,*prev=NULL,*newNode=NULL;
void Insert();
void Delete1();
void Display();
void create_node();
void main()
{
int ch,i;
clrscr();
while(1)
{
printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
printf("Enter the choice:\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
Insert();
break;
case 2:
Delete1();
break;
case 3:
Display();
break;
case 4:
exit(0);
default:
printf("\n invalid option\n");
break;
}
}
}
void Insert()
{
if(head==NULL)
{
create_node();
head=newNode;
}
else
{
create_node();
head->prev=newNode;
newNode->next=head;
head=newNode;
}
}
void create_node()
{
newNode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the value:\n");
scanf("%d",&newNode->data);
newNode->prev=NULL;
newNode->next=NULL;
}
void Delete1()
{
if(head==NULL)
{
printf("\n List is empty\n");
}
else
{
temp=head;
head=head->next;
head->prev=NULL;
printf("%d is deletion\n",temp->data);
free(temp);
}
}
void Display()
{
if(head==NULL)
{
printf("\nList is empty\n");
}
else
{
temp=head;
while(temp!=NULL)
{
printf("%d-->",temp->data);
temp=temp->next;
}
}
}

