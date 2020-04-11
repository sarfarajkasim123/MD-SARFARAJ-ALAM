#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
}*new,*head,*tail,*temp;
void create_dll()//create doubly link list
{   int val;
    char ch;
	do
	{
		new=(struct node *)malloc(sizeof(struct node));
		printf("enter the data \n");
		scanf("%d",&val);
		new->data=val;
		new->prev=NULL;
		new->next=NULL;
		if(head==NULL)
		{
			head=new;
			tail=new;
		}
		else
		{
			tail->next=new;
			new->prev=tail;
			tail=new;
		}
		printf("Y-for continue and N-for exit\n");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='Y');
}
void display_dll()//print element of doubly link list
{   printf("doubly link_list is \n ");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d  ",temp->data);
		temp=temp->next;
	}
}
void insert_ele_beg_dll()//insert element at begining
{
	int val;
	new=(struct node *)malloc(sizeof(struct node));
	printf("enter the value which you want to insert at begining in doubly linklist\n");
	scanf("%d",&val);
	new->data=val;
	new->next=head;
	new->prev=NULL;
	head->prev=new;
	head=new;
}
void insert_ele_end_dll()//insert element at ending
{
	int val;
	new=(struct node *)malloc(sizeof(struct node));
	printf("enter the value insert at end\n");
	scanf("%d",&val);
	new->data=val;
	new->next=NULL;
	new->prev=tail;
	tail->next=new;
	tail=new;
}
void insert_ele_spec_dll()//insert element at specific position
{   int i;
	temp=head;
	int val,pos;
	new=(struct node *)malloc(sizeof(struct node));
	printf("enter the position after which we want to insert an element\n");
	scanf("%d",&pos);
	printf("enter the value which insert in doubly ll\n");
	scanf("%d",&val);
	new->data=val;
	for(i=0;i<pos-1;i++)
	{
		temp=temp->next;
	}
	new->next=temp->next;
	new->prev=temp;
	temp->next->prev=new;
	temp->next=new;
}
void del_ele_beg_dll()//delete element at begining
{
  temp=head;
  head=head->next;
  temp->next=NULL;
  head->prev=NULL;
  free(temp);
}
void del_ele_end_dll()
{
	temp=tail;
	tail=tail->prev;
	temp->prev=NULL;
	tail->next=NULL;
}
void del_ele_spec_dll()
{
	int pos,i;
	temp=head;
	printf("enter the position after which element is deleted\n");
	scanf("%d",&pos);
	for(i=0;i<pos-1;i++)
	{
		temp=temp->next;
	}
	temp->next=temp->next->next;
	temp->next->prev=temp;
}
int main()
{
	int i=1,j;

	while(i>0)
	{
		printf("press 1 for creating doubly list\n");
		printf("press 2 for display doubly list\n");
		printf("press 3 for insert element at begining of doubly list\n");
		printf("press 4 for insert element at end doubly list\n");
		printf("press 5 for insert element at specific position of doubly list\n");
		printf("press 6 for deleting element at begining of doubly list\n");
		printf("press 7 for deleting element from end of doubly list\n");
		printf("press 8 for deleting element from specific position of doubly list\n");
		printf("press 9 for exit list\n");
	    printf("enter your choice\n");
		scanf("%d",&j);
	    switch(j)
	    {
	    	case 1: create_dll();
	    	         break;
	    	case 2: display_dll();
	    	         break;  
			case 3: insert_ele_beg_dll();
	    	         break;
			case 4: insert_ele_end_dll();
	    	         break;
			case 5: insert_ele_spec_dll();
	    	         break;
			case 6: del_ele_beg_dll();
	    	         break;
			case 7: del_ele_end_dll();
	    	         break;
			case 8: del_ele_spec_dll();
	    	         break;
			case 9: exit(-1);
	    	default:printf("invalid choice\n");
			break;		 		 		 		 		 		 		        
		}
			printf("press greater than 0 for continue\n");
	        scanf("%d",&i);
		
	}
	return 0;
}


