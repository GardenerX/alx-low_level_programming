#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s:input string
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int d = 0, a = 0, length = 0, num = 0, f = 0, n = 0;
while (s[length] != '\0')
length++;
while (a < length && f == 0)
{
if (s[a] == '-')
++d;
if (s[a] >= '0' && s[a] <= '9')
{
num = s[a] - '0';
if (d % 2)
num = -num;
n = n * 10 + num;
f = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')
break;
f = 0;
}
a++;
}
if (f == 0)
return (0);
return (n);
}

