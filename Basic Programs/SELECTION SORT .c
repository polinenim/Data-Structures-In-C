#include <stdio.h>  
void print(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
}  
void selection(int arr[], int n)  
{  
    int i, j, small;  
      
    for (i = 0; i < n-1; i++)    
    {  
        small = i; 
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[small])  
            small = j;  
    int temp = arr[small];  
    arr[small] = arr[i];  
    arr[i] = temp;  
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
    printf("Before sorting array elements are - \n");  
    print(a, n);  
    selection(a, n);  
    printf("\nAfter sorting array elements are - \n");    
    print(a, n);  
    return 0;  
}   
