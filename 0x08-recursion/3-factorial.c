#include "main.h"

/**
 * factorial -Entry Point
 * @n:input
 *
 * Return: 1 or -1 and outcome
 */
int factorial(int n)
{
int outcome = n;

if (n < 0)
return (-1);

else if (n >= 0 && n <= 1)
return (1);

outcome *= factorial(n - 1);
return (outcome);
}
