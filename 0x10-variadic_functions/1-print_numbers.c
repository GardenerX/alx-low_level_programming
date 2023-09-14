#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...:extra arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i, a = 0;
va_start(ap, n);
if (separator == NULL)
return;
for (i = 0; i < n; i++)
{
a = va_arg(ap, int);
printf("%d", a);
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
