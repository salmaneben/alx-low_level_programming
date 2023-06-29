#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
    int number;
    int array[5];
    int *pointer;

    array[2] = 1024;
    pointer = &number;

    /* Write your line of code here... */

    *(pointer + 5) = 98;

    /* ...so that this prints 98\n */
    printf("array[2] = %d\n", array[2]);

    return (0);
}
