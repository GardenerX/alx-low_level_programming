#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n:input
 *
 * Return: m
 */
int print_last_digit(int n)
{
int m;
m = n % 10;
if (n < 0)
{
m = m * -1;
}
_putchar(m + '0');
return (m);
}
