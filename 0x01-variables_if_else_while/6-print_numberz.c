#include <stdio.h>
#include <math.h>

/**
 * main - Entry Point
 *
 * Description: print 0-9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
int j;

for (n = 0, j = 10; n < j; n++)
putchar(n);

putchar('\n');
return (0);
}
