#include<stdio.h>
#include<conio.h>
int main()
{
int arr1[50].arr2[50].size1,size2,k,i.merge[100];
clrscr();
printf("enter the size of first array");
scanf("%d",&size1);
printf("\n enter elements in 1st array\n");
for(i=0;i<size1;i++)
{
scanf("%d",&arr1[i]);
merge[i]=arr1[i];
}
k=i;
printf("\n enter size of 2nd array");
scanf("%d",&size2);
printf("\n enter elementsof 2nd array\n");
for(i=0;i<size2;i++)
{
scanf("%d",&arr2[i]);
merge[k]=arr2[i];
k++;
}
printf("\n the merged array is\n");
for(i=0;i<k;i++)\
{
printf("%d",merge[i]);
}
getch();
return();
}
