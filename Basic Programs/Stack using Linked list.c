#include<stdio.h>
#define SIZE 5;
const int INVALID_ITEM=-2147483648;
typedef struct node
{
	int data;
	struct node *link;
}Node;
Node *top;
void push(int ditem)
{
	Node *new_node=(Node *)malloc(sizeof(Node));
	if(new_node==NULL)
	{
		printf("Insufficient Memory.\n");
		return;
	}
	new_node->data=ditem;
	new_node->link=top;
	top=new_node;
	printf("%d is pushed successfully\n",ditem);
}
int pop()
{
	int item;
	Node *cur;
	if(top==NULL)
	{
		printf("Stack Empty\n");
		return INVALID_ITEM;
	}
	item=top->data;
	cur=top;
	top=top->link;
	free(cur);
	return item;
}
int main()
{
	int option;int item;
	top=NULL;
	do
	{
		printf("\n\n\t\t\tMENU\n");
		printf("\t1.Push\n");
		printf("\t2.Pop\n");
		printf("\t3.exit\n");
		printf("\t\t\t\t\tenter your option: ");
		scanf("%d",&option);
		switch(option)
		{
			case 1:printf("Enter data : ");
			scanf("%d",&item);
			push(item);
			break;
			case 2:item=pop();
			if(item!=INVALID_ITEM)
			printf("Popped Item: %d",item);
			break;
			case 3:break;
		}
	}while(option!=3);
}
