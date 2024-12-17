#include<stdio.h>
#include<stdlib.h>
void main()
{
int arr[30],i,n,a,b,temp,arr 1[30];
char ch;
clrscr();
printf("\n 1.CREATE");
printf("\n 2.UNION");
printf("\n 3.FIND");
printf("\n 4.EXIT");
while(1)
{
printf("\n Enter choice:");
scanf("%d",&ch);
switch(ch)
{
printf("Enter number of elementsin set:");
scanf("%d",&n);
printf("Enter elements in set:");
for(i=0;i<n;i++)
{
scanf("%d",&arr 1[i]);
arr[i]=i;
}
break;
printf("\n Enter the index of elements(2 indices)which are to be connected(union):\n");
scanf("%d %d",&a,&b);
temp=arr[a];
for(i=0;i<n;i++)
{
if(arr[i]==temp)
arr[i]=arr[b];
}
printf("\n Elements have been succesfully connected(union operation)\n");
break;
printf("\n Enter the index of  elements(2 indices)whose connection is to be checked(find operation):\");
scanf("%d %d",&a,&b);
if(arr[a]==arr[b])
{
printf("\nElements at indices %d&%d  are not connected\n",a,b);
}
break;
exit(0);
break;
default:
printf("\n wrong choice,please select a valid cho8ice");
break;
}
}
}