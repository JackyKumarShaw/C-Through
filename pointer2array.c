#include<stdio.h>
#include<stdlib.h>
void delete(int *, int);
void main()
{
int n,i;
printf("Enter the size: ");
scanf("%d",&n);
int (*p)[n];
printf("\nEnter the values\n");
for(i=0;i<n;i++)
scanf("%d",p[i]);
printf("\nThe elements are :-\n");
for(i=0;i<n;i++)
printf("%d",*p[i]);
delete(p,n-1);
}
void delete(int *x,int n)
{
int l=0,k,i;
char c;
l++;
printf("\nEnter the value you want to delete: ");
scanf("%d",&k);
i=0;
while(*x[i]!=k)
{
i++;
}
while(i<n)
{
*x[i]=*x[i+1];
i++;
}
printf("\nThe deleted list\n");
for(i=0;i<n;i++)
printf("%d",*x[i]);
printf("\nDo you want to continue?(Y/n):");
scanf("%s",&c);
if(c=='y' || c=='Y')
delete(x,n-l); 
else
return;
}

