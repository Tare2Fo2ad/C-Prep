#include <stdio.h>

int max_xor(int a, int b) {
	int temp = 0, max = 0;
	for (int i = a; i <= b; i++) {
		for (int j = i; j <= b; j++) {
			temp = i ^ j;
			if (temp > max) {
				max = temp;
			}
		}
	}
	return max;
}


int main(void) {
	printf("max xor is %d",max_xor(8, 20));
}
