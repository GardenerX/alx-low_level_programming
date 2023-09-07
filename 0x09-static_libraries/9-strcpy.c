#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
int a = 0;
int n = 0;

while (*(src + a) != '\0')
{
a++;
}
for ( ; n < a ; n++)
{
dest[n] = src[n];
}
dest[a] = '\0';
return (dest);
}

