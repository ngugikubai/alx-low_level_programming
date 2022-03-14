#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *Return: return 0 if successful
 */
int main(void)
{
char alphabet;
char x = '\n';
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
putchar(x);
}
return (0);
}
