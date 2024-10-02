#include <stdio.h>
#include <stdlib.h>
#define N 3

int main(void) {
	int min;
	min = 2147483647;
	int arr2d[N][N];
	for(int i = 0; i<N; i++)
	{
		for(int j = 0; j<N; j++)
		{
			arr2d[i][j] = rand()%5;
		}
	}
	for(int i = 0; i<N; i++){
		for(int j =0; j<N; j++){
			printf("%d ", arr2d[i][j]);
		}
		printf("\n");
	}
	for(int i = 0; i<N; i++){
		for(int j = 0; j<N; j++){
			if (arr2d[i][j] < min) {
				min = arr2d[i][j]; 
			}
		}
	}
	printf("%d\n", min);
	for(int i = 0; i<N; i++){
		for(int j = 0; j<N; j++){
			if(i == j){printf("%d ", min);}
			else{printf("%d ", arr2d[i][j]);}
		}
		printf("\n");
	}
	
	return 0;
}
