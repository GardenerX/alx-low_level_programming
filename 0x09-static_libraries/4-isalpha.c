#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c:input character
 * Return: 1 for true and 0 for false
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
return (1);
else
return (0);
}
