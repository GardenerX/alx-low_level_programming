#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: input
 * @b: input
 * @n: input
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
int a;
for (a = 0; n > 0; a++)
{
s[a] = b;
n--;
}
return (s);
}
