#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 6
void Enqueue();
void Dequeue();
void Show();
int Q[SIZE];
int front=-1;
int rear=-1;
void main()
{
int choice;
while(1)
{
printf("1.Enqueue \n 2.Dequeue \n 3.Show \n 4.Exit \n");
printf("enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
Enqueue();
break;
case 2:
Dequeue();
break;
case 3:
Show();
break;
case 4:
exit(0);
default:
printf("wrong choice");
}
}
}
void Enqueue()
{
if(rear>SIZE-1)
{
printf("Queue overflow");
}
else
{
if(front==-1)
{
front++;
}
rear++;
printf("enter the element");
scanf("%d",&Q[rear]);
}
}
void Dequeue()
{
if(front==-1||front,rear)
{
printf("Queue is empty");
}
else
{
printf("element deleted = %d",Q[front]);
front++;
}
}
void Show()
{

int i;

if(front==-1)
{
printf("queue is empty");
}
else
{

for(i=front;i<=rear;i++)
{
printf("%d \t",Q[i]);
}
}
}