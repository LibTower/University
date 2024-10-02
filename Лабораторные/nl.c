#include <stdio.h>
#define N 7
int main() {
for(int m = 0; m<N; m++){
	for(int i = 0; i<(N-m); i++){printf("%d", (N+1)-(N-m));}
	printf("\n");
}}
