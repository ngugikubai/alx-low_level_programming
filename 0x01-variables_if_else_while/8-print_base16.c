#include <stdio.h>

/**
 * main - main function
 * Description: prints hexadecimal chars using puts
 * Return: 0
 */
int main(void)
{
int num;
char alphabet;
char x = '\n';
for (num = 0; num < 10; num++)
{
putchar(num + '0');
}
for (alphabet = 'a'; alphabet <= 'f'; ++alphabet)
{
putchar(alphabet);
}
putchar(x);
return (0);
}
