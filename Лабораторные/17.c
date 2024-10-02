#include <stdio.h>
#include <stdlib.h>

int* init(int arr[], int n)
{
	arr = malloc(n*sizeof(int));
	for (int i = 0; i<n; ++i)
	{
		arr[i]=i;
	}
	return arr;
}
int main() {
	int* arr;
	int n = 10;
	int i;
	arr = init(arr, n);
	for(int i =0; i<n; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
