#include<stdio.h>

/**
 *main - main function
 *Description : prints lowercase and uppercase alphabets using putchar
 *Return: 0
 */
int main(void)
{
char alphabet;
char x ='\n';
for(alphabet = 'a'; alphabet <= 'z'; ++alphabet)
{
putchar(alphabet);
}
for(alphabet = 'A'; alphabet <= 'Z'; ++alphabet)
{
putchar(alphabet);
}
putchar(x);
return (0);
}
