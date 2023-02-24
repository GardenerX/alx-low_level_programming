#include <stdio.h>

/**
 * main - Entry Point
 *
 * main : print 0-9
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int n;
int b;

n = 0;
b = 'a';
while
(n < 10)
{
putchar(n + '0');
n++;
}
while
(b <= 'f')
{
putchar(b);
b++;
}
putchar('\n');

return (0);
}
