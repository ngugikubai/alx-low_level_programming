#include <stdio.h>

/**
 * main - main function
 * Description -a program that prints the lowercase alphabet in reverse using putchar
 * Return: 0
 */
int main(void)
{
char alphabet;
char x = '\n';
for (alphabet = 'z'; alphabet >= 'a'; --alphabet)
{
putchar(alphabet);
}
putchar(x);
return (0);
}
