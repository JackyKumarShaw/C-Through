#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,x,m,n,p,k;
	int **a;
	int **b;
	int **c;
	//clrscr();
	printf("Enter the rows and column of the first matrix and the columns of the second matrix");
	scanf("%d %d %d",&m,&n,&p);
	printf("\nEnter the values in matrix A\n");
	a=(int**)malloc(m*sizeof(int*));
	b=(int**)malloc(n*sizeof(int*));
	c=(int**)malloc(m*sizeof(int*));
	for(i=0;i<m;i++)
		*(a+i)=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		*(b+i)=(int*)malloc(p*sizeof(int));
	for(i=0;i<m;i++)
		*(c+i)=(int*)malloc(p*sizeof(int));
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
		scanf("%d",(*(a+i)+j));
	}
	}
	printf("\nEnter the values in matrix B\n");
	for(i=0;i<n;i++)
	{
	for(j=0;j<p;j++)
	{
		scanf("%d",(*(b+i)+j));
	}
	}
	printf("\nMutliplication of the two matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			x=0;
			for(k=0;k<n;k++)
			    x+=a[i][k]*b[k][j];

			c[i][j]=x;
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	//getch();
	return 0;
}


