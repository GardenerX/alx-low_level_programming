#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb:array
 * @size:bytes
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *_memset(char *s, char b, unsigned int n);
void *p;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
else
_memset(p, 0, nmemb * size);
return (p);
}

/**
 * *_memset - fills memory with a constant byte
 * @s: memory to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
