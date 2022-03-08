#include <stdio.h>

int main() {
	int x = 1;
	char *xptr =(char*) &x;
	if(*xptr){
		printf("Little Endian");
	}
	else {
		printf("Big Endian");
	}
}
