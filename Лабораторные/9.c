#include <stdio.h>
#include <string.h>
int main () {
	char string[40];
	int count = 0;
	int max= 0; int maxi, j, a;
	printf("Enter string: ");
	fgets(string, sizeof(string), stdin);
	for(int i = 0; i<strlen(string); i++){
		if(string[i] != ' ' && string != '\0'){
			count +=1;
		}
		else{
			if(count>max){
				max = count;
				maxi = i - max;
			}
			count = 0;
		}
	}
		count -= 1;
		if(count>max) {
			max = count;
			maxi = strlen(string)-max-1;

	}
	for(int i = 0; string[i] != '\0'; i++){
		if(i == maxi) {
			for(j = maxi; string[i] != '\0' && string[i] != ' '; j++, i++) {
				printf("x");
				}
			printf(" ");
			}
		else{
			printf("%c", string[i]);
		}
	}

}
