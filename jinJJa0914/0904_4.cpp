#include<stdio.h>
int main(void) {
	int year;

	printf("�����Է�");
	scanf_s("%d", &year);

	int yy = (year % 4==0) &&(year % 100!=0)||(year%400==0);
	printf("%d", yy);
	if (yy == 0) {
		printf("�����̾ƴմϴ�.");
	}
	else if (yy == 1) {
		printf("�����Դϴ�.");
		
	}
	return 0;
}