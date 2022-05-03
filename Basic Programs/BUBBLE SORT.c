#include<stdio.h>
void print(int a[], int n) 
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d ",a[i]);
	}
}
void bubble(int a[], int n) 
{
	int i, j, temp;
	for(i = 0; i < n; i++)
	{
		for(j = i+1; j < n; j++)
		{
			if(a[j] < a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main ()
{
    int n,i;
	printf("enter the size of array");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
		printf("enter");
		scanf("%d",&a[i]);
	}
	printf("Before sorting array elements are - \n");
	print(a, n);
	bubble(a, n);
	printf("\nAfter sorting array elements are - \n");
	print(a, n);
}

