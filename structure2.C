#include<stdio.h>
#include<stdlib.h>
struct student 
{
	int roll;
	char *name;
	int marks;
};

typedef struct student xyz;

void main() 
{
	xyz var[10];
	int n,i;
	printf("Enter the no. of the students");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&var[i].marks);
		gets(var[i].name);
	}
}
