#include<stdio.h>
#include<stdlib.h>
struct Node{
	int coe,pow;
	struct Node *next;
};
typedef struct Node NODE;
NODE *head1=NULL,*head2=NULL,*head3=NULL;
NODE *temp,*temp1,*temp2,*temp3,*NN;
NODE * Newnode(int coe,int pow)
{
	NN=(NODE *)malloc(sizeof(NODE));
	NN->coe=coe;
	NN->pow=pow;
	NN->next=NULL;
	return NN;
}
NODE * createpoly(NODE *head)
{
	int coe,pow;
	char ch='Y';
	while(ch!='N')
	{
		scanf("%d%d",&coe,&pow);
		NN=Newnode(coe,pow);
		if(head==NULL)
		{
			head=NN;
		}
		else 
		{
			temp=head;
			while(temp->next)
			{
				temp=temp->next;
			}
			temp->next=NN;
		}
		printf("Do u want to enter(Y/N):");
		scanf(" %c",&ch);
	}
	return head;
}
void display(NODE *head)
{
	temp=head;
	while(temp)
	{
		printf("%d %d\t",temp->coe,temp->pow);
		temp=temp->next;
	}
	printf("\n");
}
NODE * addpoly(NODE *head1,NODE *head2,NODE *head3)
{
	temp1=head1;
	temp2=head2;
	while(temp && temp2)
	{
		NN=Newnode(0,0);
		if(head3==NULL)
		{
			head3=NN;
		}
		else
		{
			temp=head3;
			while(temp->next)
			{
				temp=temp->next;
			}
			temp->next=NN;
		}
		if(temp1->pow==temp2->pow)
		{
			NN->coe=temp1->coe+temp2->coe;
			NN->pow=temp1->pow;
			temp1=temp1->next;
		}
		else if(temp1->pow>temp2->pow)
		{
			NN->coe=temp1->coe;
			NN->pow=temp->pow;
			temp2=temp2->next;
		}
	}
}
int main()
{
	head1=createpoly(head1);
	head2=createpoly(head2);
	head3=addpoly(head1,head2,head3);
	display(head1);
	display(head2);
//	display(head3);
	return 0;
}
