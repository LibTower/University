#include "sorts.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>

int main()
{
	int N;
	printf("Input N: ");
	scanf("%d", &N);

	int* massShell;
	massShell = (int *)malloc(N * sizeof(int));

	int* massMerge;
	massMerge = (int *)malloc(N * sizeof(int));

	int choose;
	printf("choose how to populate the array: \n 1 to n: 1 \n n to 1: 2 \n random: 3\n keyboard: 4 \n");
	scanf("%d", &choose);
	switch(choose)
	{
	case 1:
		for(int i = 0; i<N; i++)
		{
			massShell[i] = i+1;
			massMerge[i] = i+1;
		}
		break;

	case 2:
		for(int i = N; i>0; i--)
		{
			massShell[N-i] = i;
			massMerge[N-i] = i;
		}
		break;
	case 3:
		for(int i = 0; i < N; i++)
		{
			massShell[i] = rand() % 100;
			massMerge[i] = massShell[i];
		}
		break;
	case 4:
		printf("enter the array elements:\n");
		for(int i = 0; i < N; i++)
		{
			scanf("%d", &massShell[i]);
			massMerge[i] = massShell[i];
		}
		break;
	default:
		printf("data entered incorrectly\n");
		exit(EXIT_SUCCESS);
		}
	printf("\n");

	ShellSort(N, massShell);
	printf("Merge sort time: %lf sec\n", mergesort(massMerge, 0, N));

	free(massShell);
	free(massMerge);
	return 0;
}
