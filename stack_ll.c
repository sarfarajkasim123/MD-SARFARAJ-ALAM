#include<stdio.h>
#include<string.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
}*new,*temp,*top;
int main()
{
	char ch;
	do
	{
		int choice;
		printf("press 1 for push operation\n");
		printf("press 2 for pop operation\n");
		printf("press 3 for display\n");
		printf("enter your choce\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();
			      break;
			case 2:pop();
			      break;
		    case 3:display();
		         break;
		    case 4:exit(-1);
			default: printf("invalid choice\n");
			break;		    
		}
		printf("Y-for continue and N-for exit\n");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='Y');
}
void push()
{
	int val;
	new=(struct node *)malloc(sizeof(struct node));
	printf("enter the value\n");
	scanf("%d",&val);
	if(top==NULL)
	{
		new->data=val;
		new->next=NULL;
		top=new;
	}
	else
	{
		new->data=val;
		new->next=top;
		top=new;
	}
}
void pop()
{
	if(top==NULL)
	{
		printf("underflow\n");
	}
	else
	{
		temp=top;
		top=top->next;
		temp->next=NULL;
		printf("%d is deleted  ",temp->data);
		free(temp);
	}
}
void display()
{
	if(top==NULL)
	{
		printf("stack is empty\n");
	}
     else
    {
	   temp=top;
	   while(temp!=NULL)
	   {
	   	printf("%d   ",temp->data);
	   	temp=temp->next;
	   }
    }
}
