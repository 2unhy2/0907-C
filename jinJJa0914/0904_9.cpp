#include<stdio.h>
int main(void) {
	int num1, num2;
	num1 = 2;
	for (int i = 2; i <= 9; i++) {
		if (i == 5) {
			continue;
		}
		for (int k = 1; k < 10; k++) {
			printf("%d X %d = %d\n", i, k, i*k);
		
		}
	
	}
	return 0;
}