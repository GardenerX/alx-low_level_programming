#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: extra arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
char *write;
unsigned int i;
va_start(ap, n);
for (i = 0; i < n; i++)
{
write = va_arg(ap, char *);
if (write == NULL)
printf("(nil)");
else
printf("%s", write);
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
