#include<stdio.h>
#include<stdlib.h>


int main() {
	int* score;
	int count = 0;
	int sum = 0;
	float p = 0;
	
	printf("�л� �� �Է� : ");
	scanf_s("%d", &count);
	score = (int*)malloc(10 * sizeof(int));



	for (int i = 0;i < count;i++) {
		
		printf("�л� # %d-%d ���� �Է�", count, i+1);
		scanf_s("%d", score+i);
		sum += score[i];
	}
	printf("���� : %d\n", sum);

	for (int k = 0;k < count;k++) {
		printf("�л� # %d-%d ���� ��� : %d \n ", count, k+1,score[k]);


	}
	p = float(sum) / count;
	printf("��� ���� : %.2f", p);
	free(score);

	return 0;

}