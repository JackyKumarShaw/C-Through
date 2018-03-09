#include<stdio.h>
int gcd(int, int);
int gcd(int m,int n)
{
	if (n%m == 0)
	return m;
	else
	return gcd(n%m,m);
}
int main()
{
	int a,b,x,l;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	if (a>b)
	x=gcd(b,a);
	else
	x=gcd(a,b);
	l=(a*b)/x;
	printf("GCD : %d\n",x);
	printf("LCM : %d\n",l);
	return 0;
	getchar();
}
		
	