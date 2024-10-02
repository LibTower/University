#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define E 0.5*powf(10, -3)

int factorial(int n)
{
	if(n == 1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
float recurs(int n)
{
	long double step;
	step = (powf(-1, n)*(powf(M_PI/3, 2*n+1)/factorial(2*n+1)));
	if(fabsf(step)>E)
	{
		printf("%Lf\n", step);
		return step + recurs(n+1);
	}
	if(n==0){return 1+recurs(1);}
	else
	{
		return step;
	}
}

int main(){
	long double f;
	int n=0;
	f = recurs(n);
	printf("sin = %Lf\n", f);
}
