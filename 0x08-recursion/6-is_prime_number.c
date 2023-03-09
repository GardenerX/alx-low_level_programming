#include "main.h"

/**
 * is_prime_number - check for prime numbers
 * @n:input
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
if (n % 2 == 0)
return (0);
if (n % 5 == 0)
return (0);
if (n == 1 || n == -1)
return (0);
else
return (1);
}
