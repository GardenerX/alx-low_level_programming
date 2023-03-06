#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial segment of s
 * @s:input
 * @accept:input
 *
 * Return: n (success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int m;

while (*s)
{
for (m = 0; accept[m]; m++)
{
if (*s == accept[m])
{
n++;
break;
}
else if (accept[m + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
