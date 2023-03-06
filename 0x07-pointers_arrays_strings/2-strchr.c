#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence of the character c
 * @c:input
 * @s:output
 *
 *
 * Return: &s[a] and/or 0
 */
char *_strchr(char *s, char c)
{
int a = 0;

for (; s[a] >= '\0'; a++)
{
if (s[a] == c)
return (&s[a]);
}
return (0);
}

