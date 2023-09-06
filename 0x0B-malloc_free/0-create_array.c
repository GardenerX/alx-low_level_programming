#include "main.h"

/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char
 * @size:size array
 * @c:char to initialize
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int a;
s = malloc(sizeof(char) * size);
if (size == 0 || s == 0)
return (NULL);
else
for (a = 0; a < size; a++)
s[a] = c;
return (s);
}
