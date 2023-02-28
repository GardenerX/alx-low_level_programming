#include "main.h"

/**
 * reset_to_98 - Entry Point
 *
 * description: reset value to 98
 * 'n' -is an int variable
 * @n:input
 * @n:output
 * Return: 0 (success)
 */

void reset_to_98(int *n)
{
int i;
n = &i;
*n = 402;

printf("%d\n", i);
reset_to_98(&i);
printf("%d\n", *n);

}
