#include <stdio.h>
#include <math.h>

/**
 * main - Entry Point
 *
 * main : print 0-9
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int n = 0;
n = 0;
while (n < 10)
{
putchar(n + '0');
n++;
}
putchar('\n');

return (0);
}
