#include "main.h"

/**
 * _islower - Entry Point
 *
 * description: checking if c is lower case
 * @c:input
 *
 * Return: 0 (success)
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
