#include <stdio.h>
#define SIZE 10
int linearSearch(int *arr, int num) {
	int i;
	for (i = SIZE; i >= 0; i--) {
		if (num == *(arr+i)){
			return i+1;
		}
	}
	return -1;
}


int main (void){
	int arr[SIZE]={1,2,3,4,5,5,5,5,9,0};

	printf("location of 1 is %d\n", linearSearch(arr,1));
}
