#include<stdio.h>
void main()
{
	int i,j,n,c;
	printf("Enter n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=1;
		for(j=n;j>=i;j--)
		printf("%c",64+c++);
		for(j=3;j<=2*i-1;j++)
		printf(" ");
		for(j=n+1-i;j>=1;j--)
		{
			if(j==n)
			continue;
			printf("%c",64+j);
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		c=1;
		for(j=1;j<=i;j++)
	    printf("%c",64+c++);
	    for(j=2*n-3;j>=2*i-1;j--)
	    printf(" ");
	    for(j=64+i;j>=65;j--)
	    {
	    	if(j==64+n)
	    	continue;
	    	printf("%c",j);
	    }
	    printf("\n");
	}
}