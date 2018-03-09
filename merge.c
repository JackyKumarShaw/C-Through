#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int *a,*b,*c,i,j,n,m,k;
	printf("\nEnter The size of first array: ");
	scanf("%d",&n);
	printf("\nEnter the values in the first array:-\n");
	a=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d",(a+i));
	printf("\nEnter The size of second array: ");
	scanf("%d",&m);
	printf("\nEnter the values in the second array:-\n");
	b=(int *)calloc(m,sizeof(int));
	for(i=0;i<m;i++)
	scanf("%d",(b+i));
	c=(int *)calloc((m+n),sizeof(int));
	for(i=0,j=0;i<n&&j<m;)
	{
		if(*(a+i)<*(b+j))
			*(c+k++)=*(a+i++);
		else
			*(c+k++)=*(b+j++);
	}
	if(i==n)
		while(j!=m)
			*(c+k++)=*(b+j++);
	else
		while(i!=n)
			*(c+k++)=*(a+i++);
	i=0;
	for(printf("The Merged array in ascending order is:-");i<(m+n);printf("%d",*(c+i++)));
}