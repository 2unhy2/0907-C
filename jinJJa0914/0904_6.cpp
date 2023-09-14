#include<stdio.h>
int main(void) {
	int score;
	printf("점수입력 : ");
	scanf_s("%d",&score);

	if (score > 0 || score < 100) {
		printf("잘못입력");
	}
	else if(score >= 90) {
		printf("A학점");
	}
	else if (score >= 80) {
		printf("B학점");
	}
	else if (score >= 70) {
		printf("C학점");
	}
	else if (score >= 60) {
		printf("D학점");
	}
	else  {
		printf("F학점");
	}
	
	return 0;
}