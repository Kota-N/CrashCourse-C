#include <stdio.h>

int main()
{
    int size = 7;
    int ages[] = {1, 4, 60, 43, 54, 3, 90};
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ages[i]);
    }
    printf("\n")

        int rows = 3;
    int const columns = 4;

    int studentGrades[][columns] = {
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4},
    };

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", studentGrades[i][j]);
        }
        printf("\n");
    }

    return 0;
}