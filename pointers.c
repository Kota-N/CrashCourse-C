#include <stdio.h>

void square(int *input)
{
    *input *= *input;
}

void sizeExpample(int ages[])
{
    printf("memory size of ages = %lu\n", sizeof(ages));
}

int main()
{
    int a = 100;
    int *b = &a;

    a = 200;

    printf("a  = %d\n", a);
    printf("*b  = %d\n", *b);

    *b = 300;

    printf("a  = %d\n", a);
    printf("*b  = %d\n", *b);

    int c = 6000;
    b = &c;

    a = 4000;

    printf("a  = %d\n", a);
    printf("*b  = %d\n", *b);

    int x = 5;
    square(&x);

    printf("%d\n", x);

    int size = 5;
    int ages[] = {1, 2, 3, 4, 5};

    printf("memory size of ages = %lu\n", sizeof(ages));
    sizeExpample(ages);

    return 0;
}