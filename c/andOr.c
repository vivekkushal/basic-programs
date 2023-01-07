// WAP to illustrate the concept of AND and OR operators


#include <stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d %d", &a, &b);


	c = a && b;
	d = a || b;

	printf("a AND b is: %d\n", c);
	printf("a OR b is: %d\n", d);
	printf("The value of a is: %d and the value of b is: %d\n", a, b);
}
