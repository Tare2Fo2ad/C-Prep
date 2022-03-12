#include <stdio.h>
#include <math.h>
int compute_One(int n) { //1, 3, 5, 7, 9, …
	return ((n - 1) + 2);
}

int compute_Two(int n) {//1,3,9
	return pow(3,(n-1));
}

int main(void) {
	int n = 2;

	int x = 3;

	printf("%d\n",compute_One(n));

	printf("%d\n",compute_Two(x));

}
