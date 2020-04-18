#include<stdio.h>
#include<string.h>
#define size 10
int top=-1;       //here we globally declare it
int stack[10];     
int main()
{   int opt;
	char ch;
	do
	{
		printf("press 1 for push operation\n");
		printf("press 2 for pop operation\n");
		printf("press 3 for display\n");
		printf("press 4 for come out from stack operation\n");
		printf("Enter your choice\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:push();
			       break;
			case 2:pop();
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
void push()//push operation performed here
{
	int ele;
	printf("enter the element which you want to enter in stack\n");
	scanf("%d",&ele);
	if(top==size-1)
	{
		printf("overflow\n");
	}
	else
	{
		top++;
		stack[top]=ele;
		printf("%d element is pushed into stack\n",ele);
	}
}
void pop()//pop operation performed here
{   int ele;
	if(top==-1)
	{
		printf("underflow\n");
	}
	else
	{
		ele=stack[top];
		printf("%d element is poped out from stack\n",ele);
		top--;
	}
}
void display()//Display the element of stack
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
}
