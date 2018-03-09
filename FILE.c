#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char filename[50],c;
	clrscr();
	printf("Enter File Name: ");
	gets(filename);

	//fp = fopen(filename,"w");

	while((c=getchar()) != EOF)
	{
		fp = fopen(filename,"a");
		putc(c,fp);
		fclose(fp);
	}

	//fclose(fp);

	fp = fopen(filename,"r");

	printf("\nFile Contents:\n");
	while(!feof(fp))
	{
		c = getc(fp);
		printf("%c",c);
	}
	fclose(fp);
	getch();
}