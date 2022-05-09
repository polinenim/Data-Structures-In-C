#include<stdio.h>
#define SIZE 5
const int INVALID_ITEM=-2147483648;
int stack[SIZE];
int top;
void push(int ditem)
{
	if(top==SIZE-1)
	{
		printf("Stack is Full\n");
		return;
	}
	stack[++top]=ditem;
	printf("%d is pushed successfully\n",ditem);
}
int pop()
{
	if(top==-1)
	{
		printf("Stack Empty\n");
		return INVALID_ITEM;
	}
	return stack[top--];
}
int main()
{
	int option;
	int item;
	top=-1;
	do
	{
		printf("\n\n\t\t\tMENU\n");
		printf("\t1.Push\n");
		printf("\t2.Pop\n");
		printf("\t3.exit\n");
		printf("\t\t\t\t\tenter your option: ");
		scanf("%d",&option);switch(option)
		{
			case 1:printf("Enter data : ");
			scanf("%d",&item);
			push(item);
			break;
			case 2:item=pop();
			if(item!=INVALID_ITEM)
			{
				printf("Popped Item: %d",item);
				break;
				case 3:break;
			}
		}
	}while(option!=4);
}
