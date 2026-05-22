// Written by Christian Simmons
// This is a simple program that will ask you how old you are

#include <stdio.h>

int main(void)
{
    int age;

    printf("How old are you? ");          // Asks a question
    scanf("%d", &age);                    // Finds input

    printf("You are %d years old. Awesome!\n", age); // Response

    return 0; // End
}