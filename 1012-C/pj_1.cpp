#include<stdio.h>
int main() {
	int a = 3;
	int* ptr1 = &a;

	char b = 'b';
	char* ptr2 = &b;

	printf("%d\n", ptr1);
	printf("%d\n", sizeof(ptr1));

	printf("%d\n", ptr2);
	printf("%d\n", sizeof(ptr2));

	return 0;
}




//#include<stdio.h>
//void swap(int a,int b);
//
//int main(void) {
//	int a = 13;
//	int b = 31;
//	int* ptr1 = &a;
//	int* ptr2 = &b;
//
//	printf("swap()함수 호출 전 : a값 %d b값 %d", a, b);
//}
//void swap(int a,int b) {
//
//}