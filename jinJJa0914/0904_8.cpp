#include<stdio.h>
int main(void) {
	int i;
	int sum = 0;
	//int val = 1;
	for (i = 0; i < 10; i++) {//i+=2�ϸ� Ȧ���� ������ || ���ǹ����ε� ���� if(i%2 !=0)�̶��� ������� ||
														//¦���϶��� �پ�ѱ�-> if(i%2==0)�϶�cuntinue;���� ����Ѿ || break�� ����ݺ����� �����ų� switch�� �����ų�
		printf("i=%d,  sum=%d\n", i, sum);
		sum += i+1;
		//val += 1;
	}
	printf("sum=%d", sum);
	return 0;
}