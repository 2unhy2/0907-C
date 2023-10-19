#include<stdio.h>
#include<stdlib.h>

int main() {
	int* score;
	int count = 0;
	int sum = 0;
	int p = 0;
	
	printf("학생 수 입력");
	scanf_s("%d", &count);
	score = (int*)malloc(10 * sizeof(int));



	for (int i = 0;i < count;i++) {
		printf("학생 # %d-%d 성적 입력", count, i+1);
		scanf_s("%d", score+i);
		sum += score[i];
	}
	printf("총점 : %d\n", sum);

	for (int k = 0;k < count;k++) {
		printf("학생 # %d-%d 성적 출력 : %d \n ", count, k,score);


	}
	p = sum / count;
	printf("평균 점수 : %d", p);
	free(score);

	return 0;

}