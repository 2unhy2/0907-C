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
//정수를 하나 입력받고 정수가 양의정수이면 양의정수 음의정수면 음의정수 둘다 아니면 0