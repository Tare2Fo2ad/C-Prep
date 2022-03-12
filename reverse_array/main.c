#include <stdio.h>
#define SIZE 9
void reverse(int arr[]) {
	int i;
	volatile int temp; //to disable compiler opt
	for (i = 0; i < SIZE / 2; i++) {
		arr[i] ^= arr[SIZE - 1 - i];
		arr[SIZE - 1 - i] ^= arr[i];
		arr[i] ^= arr[SIZE - 1 - i];

		/*
		 * or
		 *
		 * temp = arr[i];
		 arr[i] = arr[SIZE - 1 - i];
		 arr[SIZE - 1 - i] = temp;*/

	}

}

int main(void) {
	int arr[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	reverse(arr);

	for (int i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}
}
