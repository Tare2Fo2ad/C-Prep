#include <stdio.h>

long arr[100];
void fibonacci(int n,long *arr){

	*arr=1;
	*(arr+1)=1;
	for (int i =2; i<100;i++){
		*(arr+i)=*(arr+(i-1))+*(arr+(i-2));
	}
	printf("fibonacci (%d) = %ld\n",n,arr[n-1]);
}


int main (void){
	fibonacci(40, arr);
}
