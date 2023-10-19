#include<stdio.h>
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void sort(int* parr) {
	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 4 - i;j++) {
			if (parr[j] > parr[j + 1]) {
				swap(&parr[j], &parr[j + 1]);
			}
		}
	}
}

int main() {
	int arr[5] = { 5,4,1,2,3 };
	
	printf("호출 전 :");
	for (int i = 0;i < 5;i++) {

		printf(" %d ", arr[i]);
	}
	
	printf("\n");
	sort(arr);
	
	printf("호출 후 :");
	for (int i = 0;i < 5;i++) {

		printf(" %d ", arr[i]);
	}
	
}
