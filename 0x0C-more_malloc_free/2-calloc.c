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
void *p;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb + size);
if (p == NULL)
return (NULL);
else
return (p);
}
