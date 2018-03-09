#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,flag=0,l,h,num,mid;
int arr[100];
int temp[100];
int b[100];
clrscr();
printf("enter the size of array--less than 100\n");
scanf("%d",&n);
printf("enter the values in the array\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
  if(arr[j]>arr[j+1])
  {
	temp[j]=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp[j];
  }
}
}
printf("The sorted array is:\n");
for(i=0;i<n;i++)
printf("%d\t",arr[i]);
getch();
printf("\nenter the no. to be searched\n");
scanf("%d",&num);
h=n-1;
l=0;
while(l<=h)
{
	mid=(l+h)/2;
	if(num<arr[mid])
		h=mid-1;
	else if(num>arr[mid])
		l=mid+1;
	else
	{
		flag=1;
		break;
	}
}
if(flag==1)
	printf("the no. is found at position %d",++mid);
else
	printf("the no. was never found");
getch();
}

