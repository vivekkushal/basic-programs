#include <stdio.h>
#include <string.h>

int main(void) {
    char test[5] = "test";

    printf("%s\n", test);

    for (int i = 0; i < 5; ++i) {
        printf("test[%d] = '%c'\n", i, test[i]);
    }

    char test2[] = "Some long string!";
    printf("test2: 🙂 %s\n", test2);

    char my_string[] = "Some string!!!";
    int length = strlen(my_string);
    printf("length: %d\n", length);

    int count_s = 0;
    for (int i = 0; i < length; ++i)
        if (my_string[i] == 's' || my_string[i] == 'S')
            count_s++;

    printf("S count: %d\n", count_s);

    char s1[] = "My string to copy!";
    char s2[50];

    strcpy(s2, s1);

    printf("s2: %s\n", s2);

    return 0;
}