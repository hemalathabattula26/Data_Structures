#include<stdio.h>
int queue[100],size,rear=-1,front=-1;
void enque_rear(int val)
{
	if(front==0 && rear==size-1)
	{
		printf("Queue is Full\n");
	}
	else if(rear==front-1)
	{
		printf("Queue is Full\n");
	}
	else if(rear==-1 && front==-1)
	{
		rear=0;
		front=0;
		queue[rear]=val;
	}
	else
	{
		rear=(rear+1)%size;
		queue[rear]=val;
	}
}
void display()
{
	int i=front;
	if(rear==-1&&front==-1)
	{
		printf("Queue is Empty\n");
		return;
	}
	while(i!=rear)
	{
		printf("%d ",queue[i]);
		i=(i+1)%size;
	}
	printf("%d\n",queue[i]);
}
int deque_front()
{
	int val;
	if(front==-1&&rear==-1)
	{
		return -1;
	}
	else if(front==rear)
	{
		val=queue[front];
		front=-1;
		rear=-1;
		return val;
	}
	else
	{
		val=queue[front];
		front=(front+1)%size;
		return val;
	}
}
void enque_front(int val)
{
	if(front==0&&rear==size-1)
	{
		printf("Queue is Full\n");
	}
	else if(rear==front-1)
	{
		printf("Queue is Full\n");
	}
	else if(front==-1&&rear==-1)
	{
		rear==0;
		front==0;
		queue[front]=val;
	}
	else if(front==0)
	{
		front=size-1;
		queue[front]=val;
	}
	else
	{
		front--;
		queue[front]=val;
	}
}
int main()
{
	int ch,val;
	scanf("%d",&size);
	while(1)
	{
		printf("1.enque at rear\n 2.deque at front\n 3.display\n 4enque at front\n 5.get rear\n 6.get front\n 7.exit:");
		scanf("%d",&ch);
		if(ch==1)
		{
			//enque at rear
			int val;
			scanf("%d",&val);
			enque_rear(val);
		}
		else if(ch==2)
		{
			//deque at front
			val=deque_front();
			if(val==-1)
			{
				printf("Queue is Empty\n");
			}
			else
			{
				printf("%d\n",val);
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
			enque_front(val);
		}
		else if(ch==5)
		{
			printf("%d",front);
		}
		else if(ch==6)
		{
			printf("%d",rear);
		}
		else
		{
			//exit;
		}
	}
}
