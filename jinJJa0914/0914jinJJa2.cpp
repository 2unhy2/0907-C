#include<stdio.h>

int main(void) {
	int val_1, val_2, a, b;

	printf("a=10,b=15일때\n");

	a = 10;
	b = 15;
	val_1 = ++a + b--;
	printf("1.val_1= ++a + b-- =%d, a=%d, b=%d\n", val_1,a, b);

	return 0;
}
//전위연산 ++a->시작전
//후위연산 b++->시작후