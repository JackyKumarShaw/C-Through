#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,l,flag=0;
char a[20];
clrscr();
printf("enter string\n");
gets(a);
for(l=0;a[l]!='\0';l++)
i=0;
j=l-1;
flag=1;
while(a[i]!='\0')
{
if(a[i]!=a[j])
flag=0;
i++;
j--;
}
if(flag==1)
printf("palindrome");
else
printf("Not palindrome");
getch();
}