#include<stdio.h>
void swap(int *s_a, int *s_b) {
	int c = *s_a;
	*s_a = *s_b;
	*s_b = c;

}
int main(void) {

	int a=12, b=21;

	int* ptr1 = &a;
	int* ptr2 = &b;

	printf("swap()호출 전 :a= %d,b=%d\n", a, b);
	swap(&a, &b);
	printf("swap() 호출 후 : a=%d,b=%d", a, b);
	
	return 0;
	
}
