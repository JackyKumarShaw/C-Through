#include<stdio.h>
double fact(int);
void main()
{
	int i,j,k,s,n;
	printf("Enter n :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>=i;j--)
		printf("  ");
		for(k=0;k<=i;k++)//this loop is helping in printing the skeleton pyramid and is also helping to get the pascal traingle elements.
		{
		s=fact(i)/(fact(k)*fact(i-k));//here the elements are generated by doing iCk i.e. i(combinations)k ,the formula of which is [i!/(k!*(i-k)!)]
		printf("%d   ", s);
		}
	printf("\n");
	}
}
double fact(int a)//nothing more than a simple function calculating factorial.
{
	double f=1;
	int i;
	for(i=1;i<=a;i++)
	f=f*i;
	return f;
}