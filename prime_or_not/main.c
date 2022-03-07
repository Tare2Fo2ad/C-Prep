#include <stdio.h>

void primeCheck(int);

int main(void) {
	int x = 7;
	primeCheck(x);
}

void primeCheck(int x) {
	int check = 1;
	for (int i = 2; i <= x; i++) {
		if (x % i == 0)
			check++;
	}
	if (check == 2) {
		printf("%d is a prime number", x);
	} else {
		printf("%d is not a prime number", x);
	}

}
