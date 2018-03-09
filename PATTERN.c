#include<stdio.h>
#include<conio.h>
main()
{
	int c,d;
	char string[]="CProgramming";
	clrscr();
	printf("\n\n");
	for(c=0;c<=11;c++)
	{
		d=c+1;
		printf("%*.1s",d,string);
	}
	//printf("---------------\n");
	for(c=11;c>=0;c--)
	{
		d=c+1;
		printf("%*.1s\n",d,string);
	}
	getch();
}