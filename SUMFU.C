#include<stdio.h>
#include<conio.h>
int sum(int,int);
int a,b,s;
void main()
{
clrscr();
printf("enter two number:");
scanf("%d%d",&a,&b);
s=sum(a,b);
getch();
}
int sum(int r,int q)
{
s=r+q;
printf("the sum is %d",s);
return 0;
}
