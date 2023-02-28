#include "main.h"

/**
 * rev_string - reverse string
 *
 * description: reversing string
 * @s:input
 *
 */
void rev_string(char *s)
{
char *str = "My School";
s = &*str;

printf("%s\n", s);
rev_string(s);
printf("%s\n", s);

}
