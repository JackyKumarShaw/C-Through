#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,l,j=0,k=0,m,n=0;
	char c;
	char str[100],str1[100],str2[100],str3[100];
	clrscr();
	printf("enter the full name: ");
	scanf("%[^\n]",str);
	l=strlen(str);
	//printf("\n%d",l);
	for(i=0;i<=l;i++)
	{
		if(str[i]==' ')
		{
			str1[k++]=str[j];
			str1[k++]='.';
			j=i+1;
		}
		if(i==l)
		{
		    for(m=j;m<l;m++)
			str2[n++]=str[m];
		    str2[n++] = ' ';
		    str2[n]=str1[k]='\0';
		    /*for(m=0;m<k;m++)
			str2[n++]=str1[m];*/strcat(str2,str1);
		}
	}
	//str2[n]='\0';
	strcpy(str3,str2);
	puts(str3);
	getch();
}




