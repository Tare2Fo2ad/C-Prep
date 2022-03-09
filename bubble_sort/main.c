#include <stdio.h>
#define index 10

void printArray(int *arr) {
	int i;
	printf("Array is sorted !\n");
	printf("{ ");

	for (i = 0; i < index; i++) {
		printf("%d", *(arr + i));
		if (i < (index - 1)) {
			printf(", ");
		}
	}
	printf("} ");
}

void swap(int *a, int *b) {
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;

}

void bubbleSorting(int *arr) {
	int i, j;

	for (i = 0; i < index - 1; i++) {
		for (j = i + 1; j < index ; j++) {
			if ((*(arr + i)) > (*(arr + j))) {
				swap((arr + i), (arr + j));

			}
		}
	}
	printArray(arr);
}

int main(void) {
	int array[index] = { 2, 3, 1, 7, 5, 9, 3, 1, 6, 7 };
	bubbleSorting(array);
}
