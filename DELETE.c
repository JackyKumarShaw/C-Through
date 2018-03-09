#include<stdio.h>
#include<conio.h>
void delBeg(int[]);
void delPos(int[]);
void delEnd(int[]);
int main()
{
  int arr[10],i,c;
  for(i=0;i<10;i++)
	arr[i]=0;
  clrscr();
  printf("Enter a list of five elements:\n");
  for(i=0;i<5;i++)
  {
	scanf("%d",&arr[i]);
  }
  i=0;
  printf("The Original List:\n");
  while(arr[i]!=0)
  {
	printf("%d\t",arr[i++]);
  }
  do {
  printf("\n\n\t\tMENU\n");
  printf("1.Delete form beginning.\n");
  printf("2.Delete after a specific position.\n");
  printf("3.Delete from the end.\n");
  printf("4.Exit.\n");
  printf("Enter your choice\n");
  scanf("%d",&c);
  switch(c)
  {
	case 1:delBeg(arr);
		   break;
	case 2:delPos(arr);
		   break;
	case 3:delEnd(arr);
		   break;
	case 4:exit(0);
	default:printf("Sorry Wrong Choice...!!");
  }
} while(1);
}
void delBeg(int arr[])
{
  int i=1;
  printf("Deleted Element: %d",arr[0]);
  while(arr[i]!=0)
  {
	arr[i-1]=arr[i];
	i++;
  }
  arr[i-1]=0;
  i=0;
  printf("\nNew List:-\n");
  while(arr[i]!=0)
  {
	printf("%d\t",arr[i++]);
  }
}
void delPos(int arr[])
{
  int i=0,k;
  printf("This is your List\n");
  while(arr[i]!=0)
  {
	printf("%d\t",arr[i++]);
  }
  printf("\nEnter the element you want to delete: ");
  scanf("%d",&k);
  i=0;
  while(arr[i]!=k)
  {
	 i++;
  }
  while(arr[i]!=0)
  {
	arr[i]=arr[i+1];
	i++;
  }
  i=0;
  printf("New List:-\n");
  while(arr[i]!=0)
  {
	printf("%d\t",arr[i++]);
  }
}
void delEnd(int arr[])
{
  int i=0;
  while(arr[i]!=0)
  {
	i++;
  }
  printf("Deleted Element: %d",arr[i-1]);
  arr[i-1]=0;
  i=0;
  printf("\nNew List:-\n");
  while(arr[i]!=0)
  {
	printf("%d\t",arr[i++]);
  }
}