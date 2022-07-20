#include <stdio.h>

int main()
{
    int a = 1, b = 0;

    printf("a++ result ==========\n");
    printf("a = %d\tb = %d\n\n", a, b);
    b = a++;
    printf("a = %d\tb = %d\n\n", a, b);

    a = 1;
    b = 0;
    printf("++a result ==========\n");
    printf("a = %d\tb = %d\n\n", a, b);
    b = ++a;
    printf("a = %d\tb = %d\n\n", a, b);

    a = 2;
    b = 0;

    printf("a-- result ==========\n");
    printf("a = %d\tb = %d\n\n", a, b);
    b = a--;
    printf("a = %d\tb = %d\n\n", a, b);

    printf("--a result ==========\n");
    printf("a = %d\tb = %d\n\n", a, b);
    b = --a;
    printf("a = %d\tb = %d\n\n", a, b);
}