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
long int num1 = 0, num2 = 0, n;
char *m = "Error";
(void)n;
if ((argc < 3 || argc > 3) && (num1 < 48 || num1 > 57) && (num2 < 48 || num2 > 57))
{
for (n = 0; m[n]; n++)
{
putchar(m[n]);
}
putchar('\n');
exit(98);
}
else
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
mul(num1, num2);
return (0);
}

/**
 * mul - multiply two numbers
 * @num1:input 1st digit
 * @num2:input 2nd digit
 * Return: s, the result
 */
int mul(int num1, int num2)
{
long int s = 0;
s = num1 *num2;
print_digit(s);
putchar('\n');
return (s);
}

/**
 * print_digit - print numbers above 9
 * @v: input digit
 * Return: Always 0 (success)
 */
int print_digit(long int v)
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
