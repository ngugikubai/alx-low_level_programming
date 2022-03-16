#include "main.h"

/**
 * main - main function
 * Description: prints _putchar using a custom header
 * The main.h file has a prototype function called _putchar
 * that is linked to a file called _putchar.c
 * Return: 0
 */

int main(void)
{
    char c[] = "_putchar";
    int i = 0;
    while (c[i] != '\0')
    {
        _putchar(c[i]);
        i++;
    }
    _putchar(10);
    return (0);
}