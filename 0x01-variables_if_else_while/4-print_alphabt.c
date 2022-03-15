#include <stdio.h>

/**
 * main -main function
 * Description: prints lowercase alphabets except q & e using putchar
 * Return: 0
 */
int main(void)
{
char alphabet;
char x = '\n';
for (alphabet = 'a'; alphabet <= 'z'; ++alphabet)
{
if (alphabet != 'q' && alphabet != 'e')
{
putchar(alphabet);
}
}
putchar(x);
return (0);
}
