#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,k,s,l;
clrscr();
printf("Enter the limit");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=n;j>=i;j--)
printf(" ");
s=i;
l=2*i-1;
for(k=1;k<=(2*i-1);k++)
{
while(s<=(2*i-1))
printf("%d",s++);
while(l>i)
printf("%d",--l);
}
printf("\n");
}
getch();
}

