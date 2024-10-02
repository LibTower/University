#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int n = 4;
const int N = n*n;

void my_print(int ArrayLen, int arr[][n])
{
	int summ = 0;
	int b = 0;
	printf("Ваш массив:\n");
	for(int j = 0; j<ArrayLen; j++)
	{
		for (int i = 0; i < ArrayLen; i++)
		{
			printf("%d ", arr[j][i]);
			if(i>=ArrayLen-2 && j>=ArrayLen-2)
			{
				summ += arr[j][i];
			}
			else
			{
				if(arr[j][i] == 0){b = 1;}
			}
		}
		printf("\n");
	}
	printf("Сумма элементов нижней правой четверти: %d\n", summ);
	if(b == 1) {printf("За пределами четверти нули есть\n");}
	else{printf("За пределами четверти нулей нет\n");}
}

void CreateRandom(int ArrayLen, int arr[])
{
	srand(time(NULL));
	for (int i = 0; i < ArrayLen; i++)
	{
			arr[i] = random() % 100;
	}
}

void CreatePrint(int ArrayLen, int arr[])
{
	int element;
	printf("Введите эллементы массива:\n");
	for (int i = 0; i < ArrayLen; i++)
	{
			scanf("%d", &element);
			arr[i] = element;

	}
}

int sort(const void *a, const void *b)
{
	return -(*(int*)a - *(int*)b);
}
void matrix(int arr[], int arr2d[][n], int ArrayLen)
{
	int count = 0;
	for(int j = 0; j<ArrayLen; j++)
	{
		for(int i = 0; i<ArrayLen; i++)
		{
			arr2d[j][i] = arr[i+count];
		}
		count+=n;
	}
}
int main()
{
	int way, sum;
	int arr2d[N][N];
	int arr[N];
	printf("Выбирите способ заполнения матрицы:\n1 - Случайные числа\n2 - Ввод "
		   "чисел с клавиатуры\n");
	scanf("%d", &way);
	switch (way)
	{
	case 1:
		CreateRandom(N, arr);
		qsort(arr, N, sizeof(int), sort);
		matrix(arr, arr2d, n);
		my_print(n, arr2d);
		break;
	case 2:
		CreatePrint(N, arr);
		qsort(arr, N, sizeof(int), sort);
		matrix(arr, arr2d, n);
		my_print(n, arr2d);
		break;
	default:
		printf("Не верно выбран способ заполнения");
		break;
	}
}
