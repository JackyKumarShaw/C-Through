#include<stdio.h>
#include<math.h>
#define f(x) (pow(x,4)+pow(x,2)-1)
int main()
{
	double a,b,c=0.0;
	int i;
	printf("Enter the value of a and b\n");
	scanf("%lf%lf",&a,&b);
	printf("i\t a\t b\t c\t f(c)\n");
	do
	{
		c=(a+b)/2;
		printf("%d\t%.6lf %.6lf %.6lf\n",i,a,b,c,f(c));
		if(f(a)*f(c)<0)
			b=c;
		else
			a=c;
		i++;	
	}while(fabs(a-b)>0.0000001);
	printf("The root of the given equation is:%.6lf\nAt %d iteration",c,i);
	return 0;
}