#include <stdio.h>
int countDigits(int x) {
	int count = 0;

		do{
			count++;
			x/=10;

		}
		while(x!=0);



	return count;
}

int main(void) {
int x = 11111;
printf("count is %d",countDigits(x));
}

