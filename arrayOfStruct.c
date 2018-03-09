#include<stdio.h>
#include<stdlib.h>
typedef struct abc
{
	int a;
	struct abc *next;
}node;
void main()
{
	int n,i;
	node *p;
	printf("Enter the size of array");
	scanf("%d",&n);
	p=(node*)malloc(n*sizeof(node));
	printf("\nEnter the values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&((p+i)->a));
	}
	printf("\nThe values are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",(p+i)->a);
	}
}