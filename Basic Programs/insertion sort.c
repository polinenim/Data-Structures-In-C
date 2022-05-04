#include <stdio.h>
void insert(int a[], int n) 
{
	int i, j, temp;
	for (i = 1; i < n; i++) {
		temp = a[i];
		j = i - 1;
		while(j>=0 && temp <= a[j])
		{
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = temp;
	}
}
void printArr(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
int main()
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
	printArr(a, n);
	insert(a, n);
	printf("\nAfter sorting array elements are - \n");
	printArr(a, n);
	return 0;
}
