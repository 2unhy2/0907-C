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
		
		printf("%d%%진행... pi = %f: \n", percent, pi);
	
	}
	return 0;

}

/* 몬테카를로 알고리즘 : 랜덤함수생성(100000돌리기)후, 무작위 난수를 기반으로 생성해서 구하고자 하는
정보의 확률을 계산하는 알고리즘
x,y에 랜덤함수를 써서 일정한 개수의 점을 균일하게 분포..?
부채꼴의 넓이 pi/4
pi/4=점갯수/전체넓이 -> pi=(4*m)/n
x^+y^<=1 이면 부채꼴 안에 있는 점
*/