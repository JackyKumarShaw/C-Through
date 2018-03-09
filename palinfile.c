#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	FILE *fp,*fp2;
	char filename[20],filename2[20], word[20], rev_wrd[20], c;
	int i=0,j;
	clrscr();
	printf("Enter file name to read from: ");
	gets(filename);
	fp=fopen(filename,"r");
	printf("Enter the filename to write the palindrome words to :\n");
	gets(filename2);
	fp2=fopen(filename2,"w");
	printf("Palin Words:\n");

	while(!feof(fp))
	{
		c=getc(fp);
		if(c!=' ' && c!='\n')
			word[i++]=c;
		else
		{
			word[i]='\0';
			for(j=0;j<i;j++)
				rev_wrd[j]=word[i-1-j];
			rev_wrd[i]='\0';
			if(strcmp(word,rev_wrd)==0)
				fprintf(fp2,"%s\n",rev_wrd);

			i=0;
		}
	}
	fcloseall();
	/*fp2=fopen(filename2,"r");
	while(!feof(fp2))
	printf("%c",getc(fp2));*/
	getch();
}