#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,j,k;
clrscr();
printf("Enter the limit");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=n;j>=i;j--)
printf(" ");
for(k=1;k<=i;k++)
printf("* ");
printf("\n");
}
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
printf(" ");
for(k=n;k>=i;k--)
printf("* ");
printf("\n");
}

getch();
}