#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf(" ");
        for(j=n+1-i;j>=1;j--)
        printf("%c ",64+j);
        printf("\n");
    }
}