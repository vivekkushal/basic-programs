#include <stdio.h>
#define ARRAY_SIZE 5

int add3(int a, int b, int c) {
    return a + b + c;
}

int main() {
    // printf("Hello World!\n");
    // printf("add3 = %i\n", add3(3, 4, 6));

    // char ch;
    // ch = getchar();
    // printf("ch: %c", ch);

    // int arr[ARRAY_SIZE];
    // printf("Enter %d integers of your choice:\n", ARRAY_SIZE);
    // for (int i = 0; i < ARRAY_SIZE; ++i) {
    // 	scanf("%d", &arr[i]);
    // }
    // printf("Your array is:\n");
    // printf("[");
    // for (int i = 0; i < ARRAY_SIZE; ++i) {
    // 	if (i == 0) printf("%d,", arr[i]);
    // 	else if (i == ARRAY_SIZE - 1) printf(" %d", arr[i]);
    // 	else printf(" %d,", arr[i]);
    // }
    // printf("]\n");

    // float arr[ARRAY_SIZE], sum = 0;
    // int i;

    // printf("Enter marks of %d students:\n", ARRAY_SIZE);
    // for (i = 0; i < ARRAY_SIZE; ++i) {
    // 	scanf("%f", &arr[i]);
    // 	sum += arr[i];
    // }
    // float avg = sum / ARRAY_SIZE;
    // printf("The average of the integers is: %f\n", avg);

    char str[] = "Welcome to jenny's lectures";
    char *ptr = str;

    printf("%c\n", *ptr);
    printf("%c\n", *(ptr++ + 1));
    printf("%c\n", *((ptr-- + 5) - 1) + 3);
    printf("%c\n", *(++ptr + 10) - 32);
    printf("%c %c %c\n", *ptr, *++ptr, *--ptr);
}