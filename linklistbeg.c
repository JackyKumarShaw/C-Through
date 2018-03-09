#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
int data;
struct list *next;
} node;
void main()
{
char a;
node *head=NULL;
node *q,*t;
do
{
q=(node*)malloc(sizeof(node));
printf("\nEnter data\n");
scanf("%d",&q->data);
//t=head;
if(head==NULL)
{
q->next=NULL;
head=q;
}
else
{
/*while(t->next!=NULL)
t=t->next;
q->next=t->next;
t->next=q;*/
q->next=head;
head=q;
}
printf("\nDo you want to continue(Y/N)");
getchar();
scanf("%c",&a);
}
while(a=='Y'||a=='y');
t=head;
while(t!=NULL)
{
printf("\n%d",t->data);
t=t->next;
}
}


