#include "main.h"

/**
 * jack_bauer - print every minute
 *
 *
 */

void jack_bauer(void)
{
int n, m, o, q;

for (n = 0; n <= 2; n++)
{
for (m = 0; m <= 3; m++)
{
for (o = 0; o <= 5; o++)
{
for (q = 0; q <= 9; q++)
{
_putchar(n + '0');
_putchar(m + '0');
_putchar(':');
_putchar(o + '0');
_putchar(q + '0');
_putchar('\n');
}
}
}
}
}
