#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void merge(int[],int,int,int);
void mergeSort(int[],int,int);
void main()
{
	int *a,i,l,mid,h,n;
	clrscr();
	printf("Enter the size of unsorted array:");
	scanf("%d",&n);
	a=(int *)calloc(n,sizeof(int));
	l=0;
	h=n-1;
	printf("\nEnter the values\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Original Array\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	mergeSort(a,l,h);

	for(printf("Non Decreasing Sorted Array:\n"),i=0;i<n;printf("%d\t",a[i++]));
	getch();
}
void mergeSort(int a[],int low,int high)
{        int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergeSort(a,low,mid);
		mergeSort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
void merge(int *a,int l,int mid,int h)
{
	int i=0,j=0,k=0,*c;
	c=(int *)calloc((h-l+1),sizeof(int));
	for(i=l,j=mid+1;i<=mid&&j<=h;)
	{
		if(a[i]<a[j])
			c[k++]=a[i++];

		else
			c[k++]=a[j++];
	}
	if(i==mid+1)
		while(j<=h)
			c[k++]=a[j++];
	else
		while(i<=mid)
			c[k++]=a[i++];
	for(i=l,k=0;i<=h;i++,k++)
	a[i]=c[k];
}