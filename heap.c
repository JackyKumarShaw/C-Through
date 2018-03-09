#include<stdio.h>
void adjust(int[],int,int);
void insert(int[],int,int);
int delete(int[],int);
void main()
{
	int i,a[100],n,k;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter the elements:-\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&k);
		insert(a,i,k);
	}
	printf("\nThe Descending Order List:-\n");
	for(i=n;i>=1;printf("%d\t",delete(a,i--)));
	printf("\n");
}
void adjust(int a[],int i,int n)
{
	int j,item;
	j=2*i;
	item=a[i];
	while(j<=n)
	{
		if(j<n && a[j]<a[j+1])
			j=j+1;
		if(item>=a[j])
			break;
		a[j/2]=a[j];
		j=2*j;
	}
	a[j/2]=item;
}
int delete(int a[],int n)
{
	int x;
	if(n==0)
		printf("\nHeap Empty");
	x=a[1];
	a[1]=a[n];
	n--;
	adjust(a,1,n);
	return x;
}
void insert(int a[],int n, int k)
{
	int i;
	a[n]=k;
	for(i=n/2;i>=1;i--)
	{
		adjust(a,i,n);
	}
}