#include <stdio.h>

void checkAlpha(char x) {
	if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')) {
		printf("%c is alphabet\n",x);
	} else {
		printf("%c is alphabet\n",x);
	}
}
int main(void) {
	char x;
	x = 'G';
	checkAlpha(x);
	x = 'g';
	checkAlpha(x);
}
