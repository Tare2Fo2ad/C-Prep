#include <stdio.h>

void countOnes(unsigned long x){
	int count = 0;

	for(int i=0;i<(sizeof(x)*4);i++){
		if(x&(1<<i)){
			count++;
		}

	}
	printf("%d",count);
}
int main(void){
	countOnes(74535353);
}
