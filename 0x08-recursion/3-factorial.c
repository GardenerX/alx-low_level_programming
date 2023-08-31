#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: input number
 * Return: factorial
 */
int factorial(int n);
int factorial(int n)
{
int sum = 0;
int s = 0;
if (n < 0)
return (-1);
if (n == 0)
return (1);
else
{
s = n - 1;
sum = n;
sum *= factorial(s);
}
return (sum);
}
