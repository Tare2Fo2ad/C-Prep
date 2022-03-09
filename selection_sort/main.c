#include <stdio.h>
#define SIZE 10
void selectionSort(int *arr) {
	int i, j, c;
	int min, temp;
	for (i = 0; i < SIZE - 1; i++) {
		min = i;
		for (j = i + 1; j < SIZE; j++) {
			if ((*(arr + min)) > (*(arr + j))) {
				min = j;
			}

		}
		temp = *(arr + min);
		*(arr + min) = *(arr + i);
		*(arr + i) = temp;
	}

	printf("Array is sorted !\n");
	printf("{ ");

	for (c = 0; c < SIZE; c++) {
		printf("%d", *(arr + c));
		if (c < (SIZE - 1)) {
			printf(", ");
		}
	}
	printf("} ");

}

int main(void) {
	int array[SIZE] = { 2, 3, 1, 7, 5, 9, 3, 1, 6, 7 };
	selectionSort(array);
}
