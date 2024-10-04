/* 
	код получает на вход масив из N чисел, 
 	сортирует его по убыванию, перезаписывает массив в виде матрицы n*n элементов,
  	после чего находит нижние 4 элемента масива и находит их сумму.
   	Так же программа пишет, есть ли за пределами этой четверти нули или нет.

    	Работа выполнялась для изучения синтаксиса функций на C.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int n = 4;
const int N = n*n;

void my_print(int ArrayLen, int arr[][n]) // выводит матрицу n*n элементов на экран
{
	int summ = 0;
	bool b = false;
	printf("Ваш массив:\n");
	for(int j = 0; j<ArrayLen; j++)
	{
		for (int i = 0; i < ArrayLen; i++)
		{
			printf("%d ", arr[j][i]);
			if(i>=ArrayLen-2 && j>=ArrayLen-2)
			{
				summ += arr[j][i];  // сумма нижних четырех элементов масива
			}
			else
			{
				if(arr[j][i] == 0){b = true;} //если находит эллемент масива равный 0, меняет значение переменной на true.
			}
		}
		printf("\n");
	}
	printf("Сумма элементов нижней правой четверти: %d\n", summ);
	if(b == true) {printf("За пределами четверти нули есть\n");}
	else{printf("За пределами четверти нулей нет\n");}
}

void CreateRandom(int ArrayLen, int arr[]) // заполняет масив рандомными значениями
{
	srand(time(NULL));
	for (int i = 0; i < ArrayLen; i++)
	{
			arr[i] = random() % 100;
	}
}

void CreatePrint(int ArrayLen, int arr[]) //заполняет значениями с клавиатуры
{
	int element;
	printf("Введите эллементы массива:\n");
	for (int i = 0; i < ArrayLen; i++)
	{
			scanf("%d", &element);
			arr[i] = element;

	}
}

int sort(const void *a, const void *b) //сортирует массив
{
	return -(*(int*)a - *(int*)b);
}

void matrix(int arr[], int arr2d[][n], int ArrayLen) //перезаписывает массив в матрицу
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
