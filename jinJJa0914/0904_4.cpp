#include<stdio.h>
int main(void) {
	int year;

	printf("�����Է�");
	scanf_s("%d", &year);

	year = (year % 4==0) &&(year % 100!=0)&&(year%400==0);
	if (year = 0) {
		printf("�����Դϴ�.");
	}
	else if (year = 1) {
		printf("�����̾ƴմϴ�.");
	}
	return 0;
}