#include <stdio.h>

#define SIZE 50

void str_lower(char str[]) {

	for (int i=0; str[i]!='\0';i++){
		if (str[i]>= 'A'&& str[i]<= 'Z'){
			str[i]=str[i]+('a'-'A');
		}


	}printf("%s ",str);
}

int main(void){
	char str[SIZE] = "TeST teST";
	str_lower(str);

}
