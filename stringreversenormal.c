#include<stdio.h>
void main()
{
	char line[1000];
	int i;
	printf("Enter a line : \n");
    scanf("%[^\n]s",line);
    printf("Reverse of the line : \n");
    for(i=strlen(line)-1;i>=0;i--)
    printf("%c",line[i]);
}
	
	
	



