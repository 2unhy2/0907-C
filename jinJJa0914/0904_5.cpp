#include<stdio.h>
int main(void) {
	int num;
	printf("정수입력 : ");
	scanf_s("%d", &num);

	if (num > 0) {
		printf("양의정수입니다.");
	}
	else if (num < 0) {
		printf("음의정수입니다.");
	}
	else {
		printf("0입니다.");
	}
	return 0;
}
