#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,k;
clrscr();
printf("Enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<i;j++)
printf(" ");
for(k=n;k>=i;k--)
printf("*");
printf("\n");
}
getch();
}
