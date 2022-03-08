#include <stdio.h>

void holesPerDigit(int x) {

	int number;
	do {
		number = x % 10;
		switch (number) {
		case 1:
		case 2:
		case 3:
		case 5:
		case 7:
			printf("%d \thas 0 hole(s)\n", number);
			break;
		case 0:
		case 4:
		case 6:
		case 9:
			printf("%d \thas 1 hole(s)\n", number);
			break;
		case 8:
			printf("%d \thas 2 hole(s)\n", number);
			break;
		}
		x /= 10;
	} while (x != 0);
}
int main(void){
	holesPerDigit(451802);
}
