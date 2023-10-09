#include<stdio.h>
#include<stdlib.h>
struct Node{
	int coef;
	int pow;
	struct Node *next;
};
typedef struct Node NODE;
NODE *head=NULL,*tail=NULL,*temp,*nn;
NODE *head2=NULL,*tail2=NULL;
NODE *newnode(int coef,int pow)
{
	nn=(NODE*)malloc(sizeof(NODE));
	nn->coef=coef;
	nn->pow=pow;
	nn->next=NULL;
	return nn;
}
void insert(NODE *nn)
{
	if(head==NULL && tail==NULL)
	{
		head=nn;
		tail=nn;
	}
	else
	{
		tail->next=nn;
		tail=nn;
	}
}
void insert1(NODE *nn)
{
	if(head2==NULL && tail2==NULL)
	{
		head2=nn;
		tail2=nn;
	}
	else
	{
		tail2->next=nn;
		tail2=nn;
	}
}
void display(NODE *head)
{
	if(head==NULL && tail==NULL)
	{
		printf("NO NODE\n");
	}
	else
	{
	temp=head;
	while(temp)
	{
		printf("%d %d %d ",temp->coef,temp->pow,temp->next);
      temp=temp->next;
    }
    }
	
}
int main()
{
	int coef,pow;
	char ch='a';
	while(ch!='N')
	{
	  scanf("%d%d",&coef,&pow);
	  nn=newnode(coef,pow);
	  insert(nn);
	  printf("DO YOU WANT TO ENTER Y/N:");
	  scanf(" %c",&ch);
	}
	display(head);
	printf("\n");
	ch='a';
	while(ch!='N')
	{
	  scanf("%d%d",&coef,&pow);
	  nn=newnode(coef,pow);
	  insert1(nn);
	  printf("DO YOU WANT TO ENTER Y/N:");
	  scanf(" %c",&ch);
	}
	display(head2);
}
