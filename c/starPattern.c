#include <stdio.h>

void printStarPattern(int input) {
	if (input > 0) {
		for (int i = 1; i <= input; i++) {
			for (int j = 1; j <= i; j++) {
				printf("*");
			}
			printf("\n");
		}
	} else {
		printf("Input should be +ve\n");
	}
}

int main() {
	printStarPattern(6);
}