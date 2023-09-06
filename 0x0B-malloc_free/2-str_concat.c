#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1:input string 1
 * @s2:input string 2
 *
 * Return: returns a pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
char *joined;
int a = 0, f = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
joined = malloc(sizeof(char) * (a + f + 1));
if (joined == NULL)
return (NULL);
for (; s1[a] != '\0'; a++)
{
joined[a] = s1[a];
}
for (; s2[f] != '\0'; f++)
{
joined[a] = s2[f];
a++;
}
joined[a] = '\0';
return (joined);
}
