#include<stdio.h>      
#include<stdlib.h>
typedef struct list
{
int data;
struct list *next;
}node;
void main()
{
char a;
node *head=NULL;
node *q,*t,*t1;
do
{
q=(node*)malloc(sizeof(node));
printf("\nEnter data\n");
scanf("%d",&q->data);
t=head;
if(t==NULL)
{
q->next=NULL;
head=q;
}
else
{
while(t->next!=NULL)
t=t->next;
q->next=t->next;
t->next=q;
}
printf("\nDo you want to continue(Y/N)");
getchar();
scanf("%c",&a);
}
while(a=='Y'||a=='y');
printf("\nThe Link List\n");
t=head;
while(t!=NULL)
{
printf("%d\t",t->data);
t=t->next;
}
do
{
t=head;
if(t==NULL)
printf("\nDeletion not possible\n");
else
{
printf("\nThe deleted element: %d\n",t->data); 
head=t->next;
}
printf("\nThe current Link List\n");
t=head;
while(t!=NULL)
{
printf("%d\t",t->data);
t=t->next;
}
printf("\nDo you want to further delete from beginning?(Y/N)");
getchar();
scanf("%c",&a);
}
while(a=='Y'||a=='y');
do
{
t=head;
if(t==NULL)
{
printf("\nDeletion not possible\n");
}
else if(t->next==NULL)
{
head=NULL;
free(t);
}
else
{
t1=t->next;
while(t1->next!=NULL)
{
t1=t1->next;
t=t->next;
}
printf("\nThe Deleted Element is : %d",t1->data);
t->next=NULL;
free(t1);
}
t=head;
printf("\nThe current Link List\n");
while(t!=NULL)
{
printf("%d\t",t->data);
t=t->next;
}
printf("\nDo you want to further delete from last?(Y/N)");
getchar();
scanf("%c",&a);
}
while(a=='Y'||a=='y');
}
