#include<stdio.h>
#include<string.h>
#define size 10
int front=-1;
int rear=-1;
int queue[size];
int main()
{
	char ch;
    int opt;
	do
	{
		printf("press 1 for enqueue\n");
		printf("press 2 for dequeue\n");
		printf("press 3 for display\n");
		printf("press 4 for exit\n");
		printf("enter your choice\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:enqueue();
			       break;
			case 2:dequeue();
			        break;
			case 3:display();
			        break;
			case 4:exit(-1);
			default:printf("invalid choice\n");
			break;		       
		}
	printf("Y-for continue and N-for exit\n");
	fflush(stdin);
	scanf("%c",&ch);
	}while(ch=='Y');
	return 0;
}
void enqueue()
{
	int data;
	if(rear==size-1)
	{
		printf("overflow\n");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		rear++;
		printf("enter the value\n");
	    scanf("%d",&data);
		queue[rear]=data;
	}
}
void dequeue()
{
	int ele;
	if(rear==-1 || front>rear)
	{
		printf("underflow\n");
	}
	else
	{
		ele=queue[front];
		front++;
	}
}
void display()
{
	int i;
	if(rear==-1 || front>rear)
	{
		printf("queue is empty\n");
	}
	else
	{
	    for(i=front;i<=rear;i++)
	        {
		    printf("%d  ",queue[i]);
		    } 
			i=0;  
	}
}
