#include "main.h"

/**
 * swap_int - Entry Point
 *
 * description -switch two integers
 * @a:input
 * @b:input
 *
 * Return: 0 (success)
 */

void swap_int(int *a, int *b)
{
int c = 98;
int d = 42;
a = &c;
b = &d;
printf("a=%d, b=%d\n", *a, *b);
swap_int(&c, &d);
printf("a=%d, b=%d\n", *a, *b);
}
