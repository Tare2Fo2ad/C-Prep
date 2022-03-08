#include <stdio.h>

void checkPrimeBetween(int a, int b) {
	for (int i = a; i <= b; i++) {
		if ((i == 0) || (i == 1)) {
			printf("%d \tis not prime\n", i);

		} else {
			int count = 0;
			for (int j = 1; j <= i; j++) {
				if ((i % j) == 0) {
					count++;

				}

			}
			if (count == 2) {
				printf("%d \tis prime\n", i);
			} else {
				printf("%d \tis not prime\n", i);
			}
		}

	}
}

int main(void) {
	checkPrimeBetween(0, 20);
}
