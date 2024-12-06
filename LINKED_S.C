#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node*ptr;
}
*top,*top1,*temp;
int topelement();
void push(int data);
void pop();
void empty();
void display();
void destroy();
void stackcount();
void create();
int count=0;
void main()
{
int no,ch,e;
clrscr();
printf("\n1.Push");
printf("\n2.Pop");
printf("\n3.Top");
printf("\n4.Empty");
printf("\n5 Exit");
printf("\n6.Display");
printf("\n7.Stackcount");
printf("\n8.Destroy");
create();
while(1)
{
printf("\n Enter choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\n Enter data");
scanf("%d",&no);
push(no);
break;

case 2:
pop();
break;

case 3:
if(top==NULL)
printf("\n Number of elements in stack");
else
{
e=topelement();
printf("\n Top element=%d",e);
}
break;

case 4:
empty();
break;

case 5:
exit(0);

case 6:
display();
break;

case 7:
stackcount();
break;

case 8:
destroy();
break;

default:
printf("\n Wrong choice,please select a valid choice");
break;
}
}
}
void create()
{
top=NULL;
}
void stackcount()
{
printf("\n Number of elements in stack=%d",count);
}
void push(int data)
{
if(top==NULL)
{
top=(struct node*)malloc(sizeof(struct node));
top->ptr=NULL;
top->info=data;
}
else
{
temp=(struct node*)malloc(sizeof(struct node));
temp->ptr=top;
temp->info=data;
top=temp;
}
count++;
}
void display()
{
top1=top;
if(top1==NULL)
{
printf("\n Stack is empty");
return;
}
while(top1!=NULL)
{
printf("%d",top1->info);
top1=top1->ptr;
}
}
void pop()
{
top1=top;
if(top1==NULL)
{
printf("\n Error:trying the pop from empty stack");
return;
}
else
{
top1=top1->ptr;
printf("\n Popped value=%d",top->info);
free(top);
top=top1;
count--;
}
}
int topelement()
{
return(top->info);
}
void empty()
{
if(top==NULL)
printf("\n Stack is empty");
else
printf("\n stack is not empty with %d elements",count);
}
void destroy()
{
top1=top;
while(top1!=NULL)
{
top1=top->ptr;
free(top);
top=top1;
top1=top1->ptr;
}
free(top1);
top=NULL;
printf("\n All stack elements destroyed");
count=0;
}




