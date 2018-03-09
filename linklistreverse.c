#include<stdio.h>
#include<stdlib.h>
typedef struct List
{
	int data;
	struct List *next;
}node;
void main()
{
	int n,i,k,*arr;
	node *head,*p,*q,*a,*b,*c;
	head=(node*)malloc(sizeof(node));
	//clrscr();
	printf("Enter the start node");
	scanf("%d",&(head->data));
	head->next=NULL;
	printf("Enter the no of elements");
	scanf("%d",&n);
	p=head;
	printf("Enter the elements in the link list\n");
	for(i=1;i<=n;i++)
		{
			q=(node*)malloc(sizeof(node));
			scanf("%d",&(q->data));
			q->next=NULL;
			p->next=q;
			p=p->next;
		}
	printf("\n The Elements are : \n");
	p=head;
	while(p!=NULL)
		{
			printf("%d ",p->data);
			p=p->next;
		}
	printf("The reversed list : ");
    /*	a=head;
	b=head->next;
	c=b->next;
	while(a!=NULL)
	{
	b->next=a;
	a=c->next;
	c->next=b;
	b=a;
	a=c;
	c=b->next;
	}*/
	a=head->next;
	b=a->next;
	head->next=NULL;
	while(a!=NULL)
	{
	a->next=head;
	head=a;
	a=b;
	if(b!=NULL)
	b=b->next;
	}
	while(head!=NULL)
	{
	printf("%d ",head->data);
	head=head->next;
	}
	//getch();
	}




