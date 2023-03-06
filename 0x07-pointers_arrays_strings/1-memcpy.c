#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @n:input
 * @src:input
 * @dest:output
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int a = 0;
for  (; n > 0; a++)
{
dest[a] = src[a];
n--;
}
return (dest);
}
