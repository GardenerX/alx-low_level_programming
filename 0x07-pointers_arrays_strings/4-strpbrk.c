#include "main.h"

/**
 * _strpbrk - Entry Point
 * Description : _strpbr function locates the first occurrence in the string s
 * @accept:input
 * @s:input
 *
 * Return: '\0' or s
 */
char *_strpbrk(char *s, char *accept)
{
int n;

while (*s)
{
for (n = 0; accept[n]; n++)
{
if (*s == accept[n])
return (s);
}
s++;
}

return ('\0');
}
