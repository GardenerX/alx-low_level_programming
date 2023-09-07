#include "main.h"

/**
 *_memcpy - a function that copies memory area
 *@dest:memory where its stored
 *@src:memory where its copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int c, a;
a = n;
for (c = 0; c < a; c++)
{
dest[c] = src[c];
n--;
}
return (dest);
}

