#include<stdio.h>
void swap(int* arr) {
	int s=arr[0];
	for (int i = 0;i < 6;i++) {
		if (arr[0] > arr[1]) {
			int s = arr[0];
			arr[0] = arr[1];
			arr[1] = s;
		}
		if (arr[0] < arr[1]) {
			break;
		}
	}

}
int main(void) {

	int arr[5] = {5,4,1,2,3};
	int* p_arr = arr[5];

	printf("swap()호출 전 :arr=%d\n",arr);
	swap(arr);
	printf("swap() 호출 후 : arr=",arr);

	return 0;

}
