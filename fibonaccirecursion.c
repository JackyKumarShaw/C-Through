#include<stdio.h>
int fibo(int,int,int);
void main()
{
	int a=0,b=1,n;
	printf("Enter the limit :\n");
	scanf("%d",&n);
	printf("Fibonacci Series till %d terms :-\n",n);
	printf("0\n1\n");
	fibo(a,b,n);
}
int fibo(int a,int b,int n)
{
	int c=0;
	if(n-2==0)
	return;
	else
	{
		c=a+b;
		printf("%d\n",c);
		fibo(b,c,--n);
	}
}

	