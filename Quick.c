#include<stdio.h>
void qsort(int[],int,int);
int partition(int[],int,int);
void swap(int,int,int[]);
void main()
{
	int a[100],n,i;
	printf("Enter the size of the list: ");
	scanf("%d",&n);
	printf("\nEnter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	qsort(a,0,n-1);
	printf("\nSorted array:-\n");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
}
	
void qsort(int a[],int low,int high)
{
	int pivot_loc,i;
	if(low<high)
	{
		pivot_loc=partition(a,low,high);
		printf("%d, %d,%d,%d: ",a[pivot_loc],low,pivot_loc,high);
		for(i=0;i<10;i++)
			printf("%d",a[i]);
		printf("\n");
		qsort(a,low,pivot_loc-1);
		qsort(a,pivot_loc+1,high);
	}
}
int partition(int a[],int low,int high)
{
	int i,pivot_loc,pivot_key;
	swap(low,(low+high)/2,a);
	pivot_loc=low;
	pivot_key=a[low];
	for(i=low+1;i<=high;i++)
	{
		if(a[i]<pivot_key)
		{
			swap(++pivot_loc,i,a);
		
		}
	}
	swap(low,pivot_loc,a);
	return pivot_loc;
}
void swap(int i,int j,int a[])
{
	int t;
	t=a[i];
	a[i]=a[j];
	a[j]=t;
}