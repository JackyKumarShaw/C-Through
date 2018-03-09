#include<stdio.h>
#include<math.h>
#define f(x) (x/(1+pow(x,2)))
int main()
{
	int i,n,p;
	double a,b,h,x,y,sum=0.0,I=0.0;
	printf("Enter the value of a and b and n :-\n");
	scanf("%lf%lf%d",&a,&b,&n);
	h=(b-a)/n;
	printf("i\t x\t\t y\t\t\n");
	for(i=0;i<=n;i++)
	{
		x=a+i*h;
		y=f(x);
		printf("%d\t%lf\t%lf\n",i,x,y);
		if(i==0 || i==n)
			p=1;
		else if(i%2==0)
			p=2;
		else 
			p=4;
		sum+=p*y;
	}
	I=(h*sum)/3;
	printf("The  value of the integration is = %lf\n",I);
	return 0;
}