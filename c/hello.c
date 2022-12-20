#include <stdio.h>

int add3(int a, int b, int c) {
	return a + b + c;
}

int main() {
	printf("Hello World!\n");
	printf("add3 = %i\n", add3(3, 4, 6));
}