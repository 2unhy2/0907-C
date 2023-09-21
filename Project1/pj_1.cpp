#include<stdio.h>
int add(int a);
int main(void) {
	int num1;
	printf("소수인지 확인할 수를 입력하시오 : ");
	scanf_s("%d", &num1);
	printf("%d\n", add(num1));
	if (num1 == 0) {
		printf("소수가 아닙니다\n");
	}
	else if(num1 !=0) {
		printf("소수입니다\n");
	}
	//int result = add(num1, num2);
}
int add(int a) {

	
	//result = a % 2;
	//(int div = num1 - 1; div > 1;div--)
	for (int i = 2; i < a; i++) {
		if (a % i == 0)
			return 0;
	}
	return 1;
	
}