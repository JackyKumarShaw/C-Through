#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i,j,k,n,z,c=0,max,t,l;
	int **a,*list,*list1;
	clrscr();
	printf("Enter the no. of elements in the unsorted list: ");
	scanf("%d",&n);
	list=(int*)calloc(n,sizeof(int));
	list1=(int*)calloc(n,sizeof(int));
	a=(int**)calloc(10,sizeof(int*));
	for(i=0;i<10;i++)
		*(a+i)=(int*)calloc(n,sizeof(int));
	printf("\nEnter the values in jumbled list:-\n");
	for(i=0;i<n;i++)
		scanf("%d",(list+i));
	max=*list;
	for(i=0;i<n;i++)
	{
		if(*(list+i)>max)
			max=*(list+i);
	}
	printf("\nThe max element: %d",max);
	do
	{
	c++;
	max=max/10;
	}
	while(max!=0);
	printf("\nThe no. of digits of max element: %d",c);
	for(i=0; i<n; i++)
	{
		list1[i] = list[i];
	}
	for(z=1;z<=c;z++)
	{
		for(i=0;i<10;i++)
			for(j=0;j<n;j++)
				a[i][j]=-9999;
		l=0;
		for(printf("\nthe list:");l<n;printf("%d ",list[l++]));
		printf("\n");
		for(i=0;i<n;i++)
		{
			k=list[i]%10;
			j=0;
			while(a[k][j]!=-9999)
			{   j++;

			}
			a[k][j]=list1[i];
		}
		for(i=0; i<10; i++)
		{
			j=0;
			printf("%d:  ",i);
			while(a[i][j]!=-9999)
				printf("%d  ",a[i][j++]);
			printf("\n");
		}
		getch();
		t=0;
		for(i=0;i<10;i++)
		{
			j=0;
			while(a[i][j]!=-9999)
			{
				list1[t]=a[i][j];
				list[t++] = a[i][j++];
			}
		}


		for(i=0;i<n;i++)
			list[i]=list[i]/pow(10,z);
	}
	printf("\nThe sorted list\n");
	for(i=0;i<n;printf("\n%d",list1[i++]));
	getch();
}