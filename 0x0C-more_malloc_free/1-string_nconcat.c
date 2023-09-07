#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1:input string 1
 * @s2:input string 2
 * @n:bytes allocated
 * Return:returns a pointer pointing to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int _strlen(char *s);
char *joined;
unsigned int a, d, h;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
joined = malloc(sizeof(char) * (n + 1));
d = _strlen(s2);
if (joined == NULL)
return (NULL);
for (a = 0; s1[a] != '\0'; a++)
{
joined[a] = s1[a];
}
for (h = 0; h < n ; h++)
{
if (n >= d)
{
n = d;
}
joined[a] = s2[h];
a++;
}
joined[a] = '\0';
return (joined);
}

/**
 * _strlen - returns string length
 * @s:input string
 * Return: string length
 */
unsigned int _strlen(char *s)
{
int a;
for (a = 0; s[a]; a++)
{
}
return (a);
}
