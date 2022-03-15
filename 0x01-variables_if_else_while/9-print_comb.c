#include <stdio.h>

/**
  * main - main function
  * Description: prints all possible combinations
  * for single-digit numbers using putchar
  *Return: 0
  */
int main(void)
{
int num;
char x = '\n';
char z = 44;
char y = 32;
for (num = 0; num < 10; num++)
{
putchar(num + '0');
if (num < 9)
{
putchar(z);
putchar(y);
}
}
putchar(x);
return (0);
}
