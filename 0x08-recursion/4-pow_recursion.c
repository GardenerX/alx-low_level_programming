#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: input number
 * @y: power of
 * Return: value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
int total = x;
if (y < 0)
return (-1);
if (y == 0)
return (1);
else
{
total *= _pow_recursion(x, y - 1);
}
return (total);
}
