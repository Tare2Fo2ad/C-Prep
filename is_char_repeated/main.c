#include <stdio.h>

#define index	100
#define true	0
#define false	1
void checkDuplicate(char *str) {

	int i = 0;
	int check = 0;
	while (*(str + i) != '\0') {

		int j = i + 1;
		while (*(str + j) != '\0') {
			if (*(str + i) == *(str + j)) {
				check++;
				printf(
						"char (%c) index number\t%d\tand (%c) index number\t%d\tare similar\n",
						*(str + i), i + 1, *(str + j), j + 1);
			}
			j++;
		}
		i++;
	}
	if (check == 0) {
		printf("no repeated char\n");
	}

}

int main(void) {
	char string[100] = "Embedded Software Engineering";
	checkDuplicate(string);
}
