#include <stdio.h>
#include <stdlib.h> // required for the memory functions
#include <stdbool.h>
#include <string.h>

void fun()
{
    int static y = 0;
    y++;
    printf("%d\n", y);
}

typedef struct
{
    char name[30];
    int age;
    bool isVerified;
} user;

user *createUser(char name[], int age, bool isVerified)
{
    user *newUser = malloc(sizeof(user));
    strcpy(newUser->name, name);
    newUser->age = age;
    newUser->isVerified = isVerified;
    return newUser;
}

int main()
{
    int x = 5;
    printf("%d\n", x);

    fun();
    fun();
    fun();

    // dynamic memory
    int size;
    printf("How many elements do you need?: ");
    scanf("%d", &size);

    int *arr = malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Your array: \n");

    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr);

    user *myUser = createUser("User Name", 44, false);
    printf("He is %d years old!\n", myUser->age);
    free(myUser);

    return 0;
}