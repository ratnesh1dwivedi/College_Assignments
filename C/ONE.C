//program to print table

#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("Enter the value of n\n");
scanf("%d",&n);
for(i=1;i<=10;i++)
{printf("%d*%d=%d\n",n,i,n*i);}
getch();
}