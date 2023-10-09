#include<stdio.h>
#include<stdlib.h>
struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
};
typedef struct Node NODE;
NODE *head=NULL,*tail=NULL,*temp,*NN,*res;
NODE * newnode(int val)
{
	NN=(NODE *)malloc(sizeof(NODE));
	NN->data=val;
	NN->prev=NULL;
	NN->next=NULL;
	return NN;
}
void insert_at_head(NODE *NN)
{
	if(head==NULL &&tail==NULL)
	{
		head=NN;
		tail=NN;
	}
	else
	{
		NN->next=head;
		head->prev=NN;
		head=NN;
	}
}
void insert_at_tail(NODE *NN)
{
	if(head==NULL && tail==NULL)
	{
		head=NN;
		tail==NN;
	}
	else
	{
		NN->prev=tail;
		tail->next=NN;
		tail=NN;
	}
}
void insert_by_pos(NODE *NN,int pos)
{
	int p;
	temp=head;
	for(p=1;p<pos-1;p++)
	{
		if(temp==NULL)
		{
			printf("Insertion is not possible\n");
		}
		temp=temp->next;
	}
	NN->next=temp->next;
	NN->prev=temp;
	temp->next=NN;
	NN->next->prev=NN;
}

void display_from_head()
{
	if(head==NULL && tail==NULL)
	{
		printf("No Nodes\n");
	}
	else
	{
		temp=head;
		while(temp)
		{
			printf("%d %d %d %d \n",temp,temp->prev,temp->data,temp->next);
			temp=temp->next;
		}
	}
}
void display_from_tail()
{
	if(head==NULL && tail==NULL)
	{
		printf("No Nodes\n");
	}
	else
	{
		temp=tail;
		while(temp)
		{
			printf("%d %d %d %d \n",temp,temp->prev,temp->data,temp->next);
			temp=temp->prev;
		}
	}
}
NODE * delete_at_head()
{
	if(head==NULL && tail==NULL)
	{
		return NULL;
	}
	else if(head==tail)
	{
		res=head;
		head=NULL;
		tail=NULL;
		return res;
	}
	else
	{
		res=head;
		head=head->next;
		head->prev=NULL;
		res->next=NULL;
		return res;
	}
}
NODE * delete_at_tail()
{
		if(head==NULL && tail==NULL)
	{
		return NULL;
	}
	else if(head==tail)
	{
		res=head;
		head=NULL;
		tail=NULL;
		return res;
	}
	else
	{
		res=tail;
		tail=tail->next;
		tail->next=NULL;
		res->prev=NULL;
		return res;
	}
}
NODE *del_by_pos(int pos)
{
	int p;
	temp=head;
	for(p=1;p<pos-1;p++)
	{
		if(temp->next==head)
		{
			printf("Deletion is not possible");
			return NULL;
		}
		temp=temp->next;
	}
	res=temp->next;
	temp->next=temp->next->next;
	res->next=NULL;
	return res;
}
int main()
{
	int ch,val;
	while(1)
	{
		printf("1.insert at head\n2.insert at tail\n3.insert by position\n4.display from head to tail\n5.display from tail to head\n6.delete at head\n7.delete at end\n8.delete by position\n9.exit:");
		scanf("%d",&ch);
		if(ch==1)
		{
			//insert at head
			scanf("%d",&val);
			NN=newnode(val);
			insert_at_head(NN);
		}
		else if(ch==2)
		{
			//inset at tail
			scanf("%d",&val);
			NN=newnode(val);
			insert_at_tail(NN);
			
		}
		else if(ch==3)
		{
			//insert by position
			int pos;
			scanf("%d",&val);
			scanf("%d",&pos);
			NN=newnode(val);
			insert_by_pos(NN,pos);
		}
		else if(ch==4)
		{
			//display from head to tail
			display_from_head();
		}
		else if(ch==5)
		{
			//display from tail to head
			display_from_tail();
		}
		else if(ch==6)
		{
			//delete at head
			res=delete_at_head();
			if(res==NULL)
			{
				printf("No Nodes\n");
			}
			else
			{
				printf("%d \n",res->data);
				free(res);
			}
		}
		else if(ch==7)
		{
			res=delete_at_tail();
			if(res==NULL)
			{
				printf("No Nodes\n");
			}
			else
			{
				printf("%d \n",res->data);
				free(res);
			}
		}
		else if(ch==8)
		{
			int pos;
			scanf("%d",&pos);
			res=del_by_pos(pos);
			if(res==NULL)
			{
				printf("No Nodes");
			}
			else 
			{
				printf("%d",res->data);
				free(res);
			}
		}
		else 
		{
			
		}
	}
}
