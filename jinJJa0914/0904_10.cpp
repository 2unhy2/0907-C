#include<stdio.h>
int main(void) {
	int num = 2;
	int a = 1;
	while (num < 10) {
		if (num == 5) {
			num++;
			continue;
		}
		while (a <= 9) {
		 printf("%d X %d = %d\n", num, a, num * a);
		 a++;
		}
		num++;
		a = 1;//ÃÊ±âÈ­ÇØÁà¾ßµÊ
	}
	return 0;
}