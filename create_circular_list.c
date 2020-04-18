#include<stdio.h>
struct node
{
	int data;
	struct node *next;
}*new,*head,*tail,*temp;
void create_circular_ll();
void display_circular_ll();
int main()
{  printf("create circular link list\n");
   create_circular_ll();
   printf("display cicular link list\n");
   display_circular_ll();	
   return 0;
}
void create_circular_ll()
{
	int value;
	char ch;
	do
	{
		new=(struct node *)malloc(sizeof(struct node));
		printf("enter the value you want to enter in the circular link list\n");
		scanf("%d",&value);
		new->data=value;
		new->next=NULL;
		if(head==NULL)
		{
			head=new;
			tail=new;
		}
		else
		{
			tail->next=new;
			tail=new;
			tail->next=head;
		}
		printf("Y-for continue and N-for exit\n");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='Y');
}
void display_circular_ll()
{
	temp=head;
	while(temp->next!=head)
	{
		printf("%d",temp->data);
		printf("----");
		temp=temp->next;
	}
	printf("----");
	printf("%d",temp->data);
}
void insert_beg_cir_ll()
{
	int val;
	new=(struct node *)malloc(sizeof(struct node));
	printf("enter the data which you want to store in it at begining\n");
	scanf("%d",&val);
	new->data=val;
	new->next=head;
	tail->next=new;
	head=new;
}
void insert_end_cir_ll()
{
	int val;
	new=(struct node *)malloc(sizeof(struct node));
	printf("enter the data which you want to store at end of circular list\n");
	scanf("%d",&val);
	new->data=val;
	tail->next=new;
	tail=new;
	tail->next=head;
}
void insert_at_specific_pos_in_cir_ll()
{
	int val,pos,i;
	printf("enter the position after which we store the data\n");
	scanf("%d",&pos);
	new=(struct node *)malloc(sizeof(struct node));
	printf("enter the data which you want to store at specific position of circular list\n");
	scanf("%d",&val);
	new->data=val;
	temp=head;
	for(i=0;i<pos-1;i++)
	{
	    temp=temp->next;	
	}
	new->next=temp->next;
	temp->next=new;
}
