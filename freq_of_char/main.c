#include <stdio.h>

int freq(char str[], char x){
	int i=0,count=0;
	while (str[i]!='\0'){
		if (str[i]== x){
			count++;
		}
		i++;
	}
	return count;
}

int main(void){
	char str[100]="aaaaffffaarrrraaarrragggggg";


	printf("%d",freq(str,'a'));
}
