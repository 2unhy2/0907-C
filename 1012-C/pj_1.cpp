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
//	printf("swap()�Լ� ȣ�� �� : a�� %d b�� %d", a, b);
//}
//void swap(int a,int b) {
//
//}