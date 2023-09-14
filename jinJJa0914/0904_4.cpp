#include<stdio.h>
int main(void) {
	int year;

	printf("연도입력");
	scanf_s("%d", &year);

	year = (year % 4==0) &&(year % 100!=0)&&(year%400==0);
	if (year = 0) {
		printf("윤년입니다.");
	}
	else if (year = 1) {
		printf("윤년이아닙니다.");
	}
	return 0;
}