#include "main.h"

/**
 * jack_bauer - print every minute
 *
 */

void jack_bauer(void)
{
int n, m, o, p;

for (n = 0; n <= 2; n++)
{
for (n = 0; m <= 3; m++)
{
for (o = 0; o <= 5; o++)
{
for (p = 0; p <= 9; p++)
{
_putchar(n + '0');
_putchar(m + '0');
_putchar(':');
_putchar(o + '0');
_putchar(p + '0');
_putchar('\n');
}
}
}
}
}
