#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *link;
}Node;
Node *start;
void insert_At_Begining(int data)
{
	Node *new_node;
	new_node=(Node *)malloc(sizeof(Node));
	new_node->data=data;
	new_node->link=start;
	start=new_node;
}
void insert_At_End(int data)
{
	Node *new_node,*cur;
	new_node=(Node *)malloc(sizeof(Node));
	new_node->data=data;	
	new_node->link=NULL;
	if(start==NULL)
	{
		start=new_node;
		return;
	}
	cur=start;
	while(cur->link!=NULL)
	{
		cur=cur->link;
	}
	cur->link=new_node;
}
void insert_After_Given_Item(int data,int key)
{
	Node *new_node,*cur;
	new_node=(Node *)malloc(sizeof(Node));
	new_node->data=data;
	new_node->link=NULL;
	if(start==NULL)
	{
		start=new_node;
		return;
	}
	cur=start;
	while(cur->data!=key&&cur->link!=NULL)
	{
		cur=cur->link;
	}
	new_node->link=cur->link;
	cur->link=new_node;
}
void traverse()
{
	Node *cur=start;
	while(cur!=NULL)
	{
		printf("%d->",cur->data);
		cur=cur->link;
	}
}
void delete_Node(int data)
{
	Node *cur=start;
	Node *prev=start;
	if(start==NULL)
	{
		printf("\nList is empty\n");
		return;
	}
	while(cur!=NULL&&cur->data!=data)
	{
		prev=cur;
		cur=cur->link;
	}
	if(cur==NULL)
	{
		printf("\nNode with data:%d is not found\n",data);
		return;
	}
	if(cur==prev)
	start=start->link;
	else
	prev->link=cur->link;
	free(cur);
}
int main()
{
	int option;
	start=NULL;
	int data,item;
	do
	{
		printf("\n\n\t\t\tMENU\n");
		printf("\t1.insert at begining\n");
		printf("\t2.insert at end\n");
		printf("\t3.insert after given element\n");
		printf("\t4.traverse\n");
		printf("\t5.search\n");
		printf("\t6.delete\n");
		printf("\t7.exit\n");
		printf("\t\t\t\t\tenter your option: ");
		scanf("%d",&option);
		switch(option)
		{
			case 1:printf("Enter data : ");
			scanf("%d",&data);
			insert_At_Begining(data);
			break;
			case 2:printf("Enter data : ");
			scanf("%d",&data);
			insert_At_End(data);break;
			case 3:printf("Enter data : ");
			scanf("%d",&data);
			printf("Enter Item for reference : ");
			scanf("%d",&item);
			insert_After_Given_Item(data,item);break;
			case 4:traverse();break;
			case 5:break;
			case 6:printf("Enter data : ");
			scanf("%d",&data);
			delete_Node(data);break;
			case 7:break;
		}
	}while(option!=7);
}
