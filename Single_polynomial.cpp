#include<stdio.h>
#include<stdlib.h>
struct node{
	int row,col,val;
	struct node * next;
};
typedef struct node NODE;
NODE *head=NULL,*tail=NULL,*temp,*nn;
NODE *NEWNODE(int r,int c,int val)
{
	nn=(NODE*)malloc(sizeof(NODE));
	nn->row=r;
	nn->col=c;
	nn->val=val;
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
void display()
{
	if(head==NULL)
	{
		printf("NO NODES\n");
	}
	else
	{
		temp=head;
		while(temp)
		{
			printf("%d %d %d\n",temp->row,temp->col,temp->val);
			temp=temp->next;
		}
	}
}
int main()
{
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	int a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]!=0)
			{
				nn=NEWNODE(i,j,a[i][j]);
				insert(nn);
			}
		}
	}
	display(); 
}
