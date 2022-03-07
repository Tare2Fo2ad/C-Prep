#include <stdio.h>

int reverse(int x) {
	int result = 0;
	int reminder;
	while (x != 0) {
		reminder = x % 10;
		result = result * 10 + reminder;
		x /= 10;
	}
	return result;
}

int main(void) {
	int x = 6745;
	printf("%d", reverse(x));
	return 0;
}
