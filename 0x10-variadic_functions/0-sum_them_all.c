#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n:input
 * @...: extra arguments
 * Return: the sum, a
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, a = 0;
va_start(ap, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
a += va_arg(ap, int);
}
va_end(ap);
return (a);
}
