#include<stdio.h>
int main() {
	int n;
	
	scanf_s("%d", &n);
	printf("%d층 피라미드\n", n);

	for (int i = 0; i < n; i++) {
		
		for (int k = i; k < n-1; k++) {
			printf(" ");
		}
		for (int k = 0; k <= i*2; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}