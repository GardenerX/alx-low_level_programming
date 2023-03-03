#include "main.h"

/**
 * more_numbers - print from 0 to 14 on 10 lines
 *
 */
void more_numbers(void)
{
int n, m;

for (m = 1; m <= 10; m++)
{
for (n = 0; n <= 14; n++)
{
if (n >= 10)
_putchar('1');
_putchar (n % 10 + '0');
}
_putchar('\n');
}
}
