#include <stdio.h>

/**
 * main  - Entry Point
 *
 * main : print the alphabet with missing letters
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char f;
f = 'a';
while
(f <= 'z') {
if ((f != 'e' && f != 'q') && f <= 'z')
putchar(f);
f++;
}
putchar('\n');
return (0);
}
