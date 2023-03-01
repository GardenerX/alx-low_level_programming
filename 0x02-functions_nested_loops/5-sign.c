#include "main.h"

/**
 * print_sign - print sign and n
 * @n:input
 *
 * Return: 1 or 0 or -1
 */
int print_sign(int n)
{
while (n > 0)
{
_putchar('+');
return (1);
}
while (n == 0)
{
_putchar('0');
return (0);
}
while (n < 0)
{
_putchar('-');
return (-1);
}
return (0);
}
