#include <stdio.h>

void leftRotate(int arr[], int d, int n)
{
	int temp[d];

	for(int i = 0; i  < d; i++)
	{
		temp[i] = arr[i];
	}

	for(int i = d; i  < n; i++)
	{
		arr[i - d] = arr[i];
	}

	for(int i = 0; i  < d; i++)
	{
		arr[n - d + i] = temp[i];
	}	
}
    
int main() {
	
      int arr[] = {1, 2, 3, 4, 5}, n = 5, d = 2;

      
        printf("Before Rotation \n");

       for(int i = 0; i < n; i++)
       {
       		printf("%d ",arr[i]);
       }

       printf("\n");

       leftRotate(arr, d, n);

       printf("After Rotation \n");

       for(int i = 0; i < n; i++)
       {
       		printf("%d ",arr[i]);
       }
    
}