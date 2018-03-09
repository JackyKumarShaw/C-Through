#include<stdio.h>
#include<math.h>
#define f(x) ((3*x)- cos(x)-1)
#define g(x) (3+ sin(x))
int main()
{
	double x0,x1;
	int i=0;
	printf("Enter the initial approximation value: ");
	scanf("%lf",&x0);
	printf("i\t  x0\t  x1\n");
	x1=x0-f(x0)/g(x0);
	do
	{
		printf("%d\t%lf  %lf\n",i,x0,x1);
		x0=x1;
		x1=x0-f(x0)/g(x0);
		i++;
	}
	while(fabs(x1-x0)>0.00000001);
	printf("The root of the equation: %lf",x1);
	return 0;
}