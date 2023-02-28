#include "main.h"

/**
 * print_rev - prints a string, in reverse.
 *
 * description: in reverse
 * @s:input
 *
 */

void print_rev(char *s)
{
char *str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
s = &*str;
print_rev(s);
}
