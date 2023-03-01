#include "main.h"

/**
 * _isalpha - check alphabets
 * @c:input
 *
 * Return: 1 if alphabet and 0 if not
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
