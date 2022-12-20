#include <stdio.h>
#include <string.h>
// #include <cstring>

struct person {
	char name[50];
	int age;
	int height_in_cms;
};

int main() {

	struct person vivek;
	struct person tushar;

	strcpy(vivek.name, "Vivek");
	vivek.age = 30;
	vivek.height_in_cms = 183;

	strcpy(tushar.name, "Tushar");
	tushar.age = 33;
	tushar.height_in_cms = 160;

	int x[50];

	x[0] = 18;
	x[4] = 4;
	x[13] = 1991;

	printf("%i, %i, %i\n", x[0], x[4], x[13]);
	printf("%s, %i, %i\n",vivek.name, vivek.age, vivek.height_in_cms);
	printf("%s, %i, %i\n",tushar.name, tushar.age, tushar.height_in_cms);

	// &a -> address of a
	// *a -> value at address of a

	// int *p;
	// int a = 30;
	// p = &a;

	// printf("%p\n", p);

	int y = 7;
	int *p = &y;

	*p = 28;

	printf("%p, %i\n", p, *p);
}