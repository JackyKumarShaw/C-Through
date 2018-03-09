#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
int data;
struct list *next;
} node;
void main()
{
int i,n;
node *head,*p,*q;
head=(node*)malloc(sizeof(node));
printf("Enter the starting value: \n");
scanf("%d",&head->data);
head->next=NULL;
p=head;
printf("\nEnter the no of elements :");
scanf("%d",&n);
printf("\nEnter the values in the list: \n");
for(i=0;i<n;i++)
{
q=(node*)malloc(sizeof(node));
scanf("%d",&q->data);
q->next=NULL;
p->next=q;
p=p->next;
}
printf("\nThe Link List Elements are:\n");
p=head;
while(p!=NULL)
{
printf("%d\t",p->data);
p=p->next;
}
}
