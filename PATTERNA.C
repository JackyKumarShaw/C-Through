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
for(j=n;j>i;j--)
printf(" ");
for(k=0;k<(2*i-1);k++)
{
if(k%2==0)
printf("1");
else
printf("0");
}
printf("\n");
}
getch();
}