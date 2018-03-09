#include<stdio.h>
#include<stdlib.h>
struct abc {
	int x;
	char y;
	float z;
	double *a;
};
typedef struct abc xyz;
void main() {
	xyz var;
	var.y='a';
	var.x=2;
	var.a=(double*)malloc(10*sizeof(double));
	*(var.a+1)=8.87;
	xyz *a;
	//a = (xyz*)malloc(sizeof(xyz));
	a=&var;
	a->x=4;
	a->y='b';
	printf("%lf\t%c\n",var.a[1],var.y);
}
