#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,k,s;
clrscr();
printf("Enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=n;j>i;j--)
printf(" ");
s=i;
for(k=1;k<=i;k++)
printf("%d",s++);
printf("\n");
}
getch();
}
