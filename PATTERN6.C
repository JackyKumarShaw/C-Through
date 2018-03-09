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
for(k=1;k<=(2*i-1);k++)
printf("%d",k);
printf("\n");
}
getch();
}