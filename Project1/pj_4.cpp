#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(void) {
	double x = 0;
	double y = 0;
	int count = 0, circle = 0;
	int percent = 0;
	double pi;
	srand(time(NULL));

	while (count < 100000) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		count++;

		if ((x * x) + (y * y) <= 1){
			circle++;
		}
		pi = 4.0 * circle / (count + 1);

		percent = count / 1000;
		
		printf("%d%%����... pi = %f: \n", percent, pi);
	
	}
	return 0;

}

/* ����ī���� �˰��� : �����Լ�����(100000������)��, ������ ������ ������� �����ؼ� ���ϰ��� �ϴ�
������ Ȯ���� ����ϴ� �˰���
x,y�� �����Լ��� �Ἥ ������ ������ ���� �����ϰ� ����..?
��ä���� ���� pi/4
pi/4=������/��ü���� -> pi=(4*m)/n
x^+y^<=1 �̸� ��ä�� �ȿ� �ִ� ��
*/