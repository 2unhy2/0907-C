#include<stdio.h>

int fac(int num) {
	//if (num == 0)return 1;
	int result = 0;
	if (num == 0) {
		return 1;
	}
	result = num * fac(num - 1);
	return result;
}



int main(void) {
	int a;
	printf("����� ���丮�� �� �Է� :");
	scanf_s("%d", &a);
	int result = fac(a);
	printf("%d!=%d", a, result);
	return 0;
}
