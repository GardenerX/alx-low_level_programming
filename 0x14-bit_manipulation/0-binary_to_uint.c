#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str:input string
 * Return: string length
 */
int _strlen(const char *str)
{
int a;
for (a = 0; str[a]; a++)
{
}
return (a);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary number
 * Return: the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int res = 0;
int a, len = _strlen(b);

for (a = 0; a < len; a++)
{
if (b[a] == '0' || b[a] == '1')
{
res = res * 2 + (b[a] - '0');
}
else
return (0);
}
return (res);
}
