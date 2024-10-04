/*
	Программа перебирает масив, и если находит в нем пару чисел идущих подряд и удаляет ее. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 6
int main() {
	int count = 0;
	int j;
	int mass[N];
	srand(time(NULL));
	
	for(int i = 0; i<N; i++){
		mass[i] = rand()%10;
	}
	
	for(int i = 0; i<N; i++){
		printf("%d ", mass[i]);
	}
	printf("\n");
	
	for(int i = 1; i<N; i++){
		if(mass[i]-1 == mass[i-1] && count == 0) {
			count+=1;
			j = i-1;
		}
		if(mass[i]-1 == mass[i-1] && count < 0){
			count+=1;
		}
	}
	
	printf("Массив без первой пары: ");
	for(int i = 0; i<N; i++){
		if(i != j && j != i-1){
		printf("%d ", mass[i]);
		}
	}
	
	printf("\nКоличество пар: %d\n", count);
}
