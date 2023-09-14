#include<stdio.h>
int main(void) {
	int i;
	int sum = 0;
	//int val = 1;
	for (i = 0; i < 10; i++) {//i+=2하면 홀수만 더해짐 || 조건문으로도 가능 if(i%2 !=0)이때만 문장수행 ||
														//짝수일때는 뛰어넘기-> if(i%2==0)일때cuntinue;쓰면 문장넘어감 || break는 현재반복문을 나가거나 switch를 나가거나
		printf("i=%d,  sum=%d\n", i, sum);
		sum += i+1;
		//val += 1;
	}
	printf("sum=%d", sum);
	return 0;
}