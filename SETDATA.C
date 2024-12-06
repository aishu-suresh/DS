#include<stdio.h>
void add(int s,int no);
void display();
int set1[30],set2[30],s1,s2;
void main()
{
int uni[30],inter[30],diff[30],s,s1,POS,i,no;
char ch;
clrscr();
printf("Enter no.of elements in 1st set:");
scanf("%d",&s1);
printf("Enter the elements in 1st set(only 0s & 1s):");
for(i=0;i<s1;i++)
{
scanf("%d",&set1[i]);
}
printf("\n Enter number of elements in 2nd set:");
scanf("%d",&s2);
printf("Enter elements in 2nd set(only 0s & 1s):");
for(i=0;i<s2;i++)
{
scanf("%d",&set2[i]);
}
printf("\n 1.ADD");
printf("\n 2.REMOVE");
printf("\n 3.UNION");
printf("\n 4.INTERSECTION");
printf("\n 5.DIFFERENCE");
printf("\n 6.DISPLAY SET1 SET2");
printf("\n 7.EXIT");
while(1)
{
printf("\n Enter choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter the sets into which elements are to be added(1 or 2):");
scanf("%d",&s);
printf("Enter data(1 or 0):");
scanf("%d",&no);
add(s,no);
break;

case 2:
printf("Enter the set from which elements are to be removed(1 or 2):");
scanf("%d",&s);
printf("Enter position from which element is to be removed:");
scanf("%d",&POS);
if(s==1)
{
for(i=POS-1;i<s1-1;i++)
{
set1[i]=set1[i+1];
}
s1--;
}
else if(s==2)
{
for(i=POS-1;i<s2-1;i++)
{
set2[i]=set2[i+1];
}
s2--;
}
printf("\n Enter removed sucessfully\n");
break;

case 3:
if(s1==s2)
{
printf("\n Elements after union operation:");
for(i=0;i<s1;i++)
{
uni[i]=set1[i]|set2[i];
printf("%d",uni[i]);
}
}
else
{
printf("set union not possible as sets are of different size");
}
break;

case 4:
if(s1==s2)
{
printf("\n Elements after intersection:");
for(i=0;i<s1;i++)
{
inter[i]=set1[i]&set2[i];
printf("%d",inter[i]);
}
}
else
{
printf("set intersection not possible as set are of diiferent size\n");
}
break;

case 5:
if(s1==s2)
{
printf("\n Elements after difference operation:");
for(i=0;i<s1;i++)
{
diff[i]=set1[i]&~set2[i];
printf("%d",diff[i]);
}
}
else
{
printf("set difference not possible as sets are of diiferent size\n");\
}
break;

case 6:
display();
break;
case 7:
exit(0);
break;
default:
printf("\n Wrong choice,please select a valid choice");
break;
}
}
}
void add(int s,int no)
{
if(s==1)
{
set1[s1]=no;
s1++;
}
elseif(s==2)
{
set2[s2]=no;
s2++;
}
printf("\nElement added successfully\n");
}
void display()
{
int i;
printf("\n Elements in 1st set:");
for(i=0;i<s1;i++)
{
printf("%d",set1[i]);
}
printf("\n Elements in 2nd set:");
for(i=0;i<s2;i++)
{
printf("%d",set2[i]);
}
}

