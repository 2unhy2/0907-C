#include<stdio.h>
int main(void) {
	double score;
	printf("�����Է�");
	scanf_s("%d", &score);
	int scoredive = score / 10;
	if (score > 100 || score < 0) {
		printf("�߸��Է��߽��ϴ�.");
		return 0;
	}
	
	else {
		switch (scoredive) {
		case 10:
		case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
		default:
			printf("F");
		}
	}
	
	return 0;
}