#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: input string
 * @src:input string
 * @n:input string
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a = 0, b = 0;
while (dest[a] != '\0')
{
a++;
}
while (b < n && src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
