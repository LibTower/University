#include <stdio.h>

int main() {
	int n, a, s, k;
	scanf("%d", &a);
	for (n=a, s =0; n!=0; n = n/10)
	{k = n%10; s = s+k;}
	printf("%d\n", s);
	printf("%d\n", k);
}
