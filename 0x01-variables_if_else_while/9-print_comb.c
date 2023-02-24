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
int e;
e = 0;
while
(e < 10)
{
putchar(e + '0');
e++;
if
(e <= 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
