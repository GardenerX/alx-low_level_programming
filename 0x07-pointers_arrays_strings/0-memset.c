#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * @n:input
 * @b:input
 * @s:output
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
int a = 0;
for (; n > 0; a++)
{
s[a] = b;
n--;
}
return (s);
}
