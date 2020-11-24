#include <stdio.h>

int square(int input)
{
    return input * input;
}

int cube(int input)
{
    return input * input * input;
}

int power(int input, int exponent)
{
    int total = 1;
    for (int i = 0; i < exponent; i++)
    {
        total *= input;
    }
    return total;
}

int recursivePower(int input, int exponent)
{
    if (exponent < 1)
    {
        return 1;
    }
    return input * recursivePower(input, exponent - 1);
}

void changeVal(int *input)
{
    *input = 90000;
}

int oldestValue(int ages[], int size)
{
    int largest = ages[0];
    for (int i = 1; i < size; i++)
    {
        if (largest < ages[i])
            largest = ages[i];
    }
    return largest;
}

int main()
{
    int x = 5;
    int xSquared = square(x);
    int xCube = cube(x);
    int xTo5 = recursivePower(x, 5);

    changeVal(&x);
    printf("%d\n%d\n%d\n", xSquared, xCube, xTo5);
    printf("%d\n", x);

    int size = 7;
    int ages[] = {1, 4, 53, 23, 23, 9, 52};
    printf("%d\n", oldestValue(ages, size));

    return 0;
}