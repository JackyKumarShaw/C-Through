#include<stdio.h>
void main()
{
	int i,j,k,n,l,c;
	printf("Enter n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=1;
		for(j=n;j>=i;j--)
		printf("%c",64+c++);
		for(k=3;k<=2*i-1;k++)
		printf(" ");
		for(l=n+1-i;l>=1;l--)
		{
			if(l==n)
			continue;
			printf("%c",64+l);
		}
		printf("\n");
	}
}
			