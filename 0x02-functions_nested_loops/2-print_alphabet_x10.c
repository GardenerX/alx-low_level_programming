#include "main.h"

/**
 * print_alphabet_x10 - Entry Point
 *
 * description : printing the alphabet x10
 *
 * return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
int n;
int b;

for (n = 1; n <= 10; n++)
{
for (b = 'a'; b <= 'z'; b++)
{
_putchar(b);
}
_putchar('\n');
}
}
