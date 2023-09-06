#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str:input string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 *
 */
char *_strdup(char *str)
{
char *copied;
int a = 0;
if (str == NULL)
return (NULL);
copied = malloc(sizeof(char) * a);
for (; str[a]; a++)
{
copied[a] = str[a];
}
return (copied);
}
