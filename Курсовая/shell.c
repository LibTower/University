#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "sorts.h"
#include <time.h>
void ShellSort(int n, int mass[])
{
    double time = 0.0;
    int i, j, step;
    int tmp;
    clock_t start = clock();
    for (step = n / 2; step > 0; step /= 2)
        for (i = step; i < n; i++)
        {
            tmp = mass[i];
            for (j = i; j >= step; j -= step)
            {
                if (tmp < mass[j - step])
                    mass[j] = mass[j - step];
                else
                    break;
            }
            mass[j] = tmp;
        }
    clock_t end = clock();
    time += (double)(end-start)/CLOCKS_PER_SEC;
    printf("Shell sort time: %lf sec\n", time);
}
