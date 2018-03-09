#include<stdio.h>
#include<math.h>
#define f(x) (sin(x)+cos(x)-1)
int main()
{
	double a,b,c1,c2;
	int i=0;
	printf("Enter the limiting values :\n");
	scanf("%lf%lf",&a,&b);
	c1=a;
	printf("i\t\ta\t\tb\t\tc1\t\tc2\n");
	do
	{
		c2=c1;
		c1=a+(    fabs(f(a)) / ( fabs(f(a))+fabs(f(b)) )    )*(b-a);
		printf("%d\t   %lf\t   %lf\t   %lf\t   %lf\n",i,a,b,c1,c2);
		if(f(a)*f(c1)<0)
			b=c1;
		else
			a=c1;
		i++;
	}
	while(fabs(c1-c2)>0.0000001);
	printf("At the iteratating value %d the root of the equation is %lf\n",i,c2);
	return 0;
}