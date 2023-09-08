#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc:number of arguments
 * @argv:arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
int a = 0, b = 0, n;
char *m = "Error";
(void)n;
if ((argc < 3 || argc > 3) && (a < 48 || a > 57) && (b < 48 || b > 57))
{
for (n = 0; m[n]; n++)
{
putchar(m[n]);
}
putchar('\n');
exit(98);
}
else
a = atoi(argv[1]);
b = atoi(argv[2]);
mul(a, b);
return (0);
}

/**
 * mul - multiply two numbers
 * @a:input 1st digit
 * @b:input 2nd digit
 * Return: s, the result
 */
int mul(int a, int b)
{
int s = 0;
s = a *b;
print_digit(s);
putchar('\n');
return (s);
}

/**
 * print_digit - print numbers above 9
 * @v: input digit
 * Return: Always 0 (success)
 */
int print_digit(int v)
{
if (v <= 9)
{
putchar(v + '0');
}
if (v / 10)
{
print_digit(v / 10);
putchar((v % 10) + '0');
}
return (0);
}
