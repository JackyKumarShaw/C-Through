#include<stdio.h>
void main()
{
int a,*b,**c;
a=40;
b=&a;
c=&b;
printf("a=%d, *b=%d, **c=%d",a,*b,**c);
printf("\n&a=%x, b=%x, &b=%x, c=%x, *c=%x",&a,b,&b,c,*c);
}