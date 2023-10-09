#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
typedef struct Node NODE;
NODE *head=NULL,*tail=NULL,*temp,*NN,*res;
void display()
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
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("\n");
		
	}
}
void insert_at_tail(NODE *NN)
{
	if(head==NULL && tail==NULL)
	{
		head=NN;
		tail=NN;
	}
	else
	{
		tail->next=NN;
		tail=NN;
	}
}
void insert_at_head(NODE *NN)
{
	if(head==NULL && tail==NULL)
	{
		head=NN;
		tail=NN;
	}
	else
	{
		NN->next=head;
		head=NN;
	}
}
NODE * delet()
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
		temp=head;
		while(temp->next->next)
		{
			temp=temp->next;
		}
		res=tail;
		temp->next=NULL;
		tail=temp;
		return res;
	}
}
NODE * delete_at_head()
{
	if(head==NULL &&tail==NULL)
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
		temp=head;
		temp=temp->next;
		res=head;
		head->next=NULL;
		head=temp;
		return res;
		/*temp=head;
		temp=head->next;
		head->next=NULL;
		return temp;*/
	}
}
void reverse()
{
	NODE *cur,*prev,*next;
	if(head==NULL && tail==NULL)
	{
		printf("No Nodes\n");
	}
	else if(head==tail)
	{
		printf("No need or list contains singleelement\n");	
	}
	else
	{
		tail=head;
		cur=head;
		prev=NULL;
		next=NULL;
		while(cur)
		{
			next=cur->next;
			cur->next=prev;
			prev=cur;
			cur=next;
		}
		
		head=prev;
	}
}
void insert_by_pos(NODE *NN,int pos)
{
	int p=1;
	if(head==NULL && tail==NULL)
	{
		printf("Not Possible");
	}
	else if(head==tail)
	{
		printf("Not possible");
	}
	else
	{
		int f;
		temp=head;
		for(p=1;p<pos-1;p++)
		{
		    if(temp==NULL)
		    {
		    	printf("Insertion is not possible\n");
		        f=1;
		    	break;
			}
			temp=temp->next;
		}
		if(f==0)
		{
			NN->next=temp->next;
	        temp->next=NN;
		}
	}
}
NODE * delete_at_pos(int pos)
{
	int p;
	if(head==NULL && tail==NULL)
	{
		return NULL;
	}
	temp=head;
	for(p=1;p<pos-1;p++)
	{
		if(temp==NULL)
		{
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
		printf("1.insert at head\n2.delete\n3.display\n4.insert at tail\n5.delete at head\n6.reverse\n7.insert by position\n8.delete by position\n9.exit:");
		scanf("%d",&ch);
		if(ch==1)
		{
			//insert at tail
			scanf("%d",&val);
			NN=(NODE *)malloc(sizeof(NODE));
			NN->data=val;
			NN->next=NULL;
			insert_at_tail(NN);
		}
		else if(ch==2)
		{
			//delete
			res=delet();
			if(res==NULL)
			{
				printf("No Nodes\n");
			}
			else
			{
				printf("%d\n",res->data);
				free(res);
			}
		}
		else if(ch==3)
		{
			//display
			display();
		}
		else if(ch==4)
		{
			scanf("%d",&val);
			NN=(NODE *)malloc(sizeof(NODE));
			NN->data=val;
			NN->next=NULL;
			insert_at_head(NN);
		}
		else if(ch==5)
		{
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
		else if(ch==6)
		{
			reverse();
		}
		else if(ch==7)
		{
			int pos,val;
			scanf("%d",&val);
			scanf("%d",&pos);
			NN=(NODE *)malloc(sizeof(NODE));
			NN->data=val;
			NN->next=NULL;
			insert_by_pos(NN,pos);
		}
		else if(ch==8)
		{
			int pos;
			scanf("%d",&pos);
			res=delete_at_pos(pos);
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
		else
		{
			break;
		}
	}
}

