#include <stdio.h>

int main() {
	int k, m, n;
	printf("Vvedite n:");
	scanf("%d", &n);
	for (k = 0, m = 1; m<=n; k++, m = m*2);{
		printf("%d\n", k - 1);
		printf("%d\n", m);
		return k-1;
}
}
