#include <stdio.h>
#include <ctype.h>

/**
 *main - Entry Point
 *
 * main : A program that prints the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char x;
char b;

x = 'a';
b = 'A';
while
(x <= 'z') {
putchar(x);
x++;
}
while
(b <= 'Z') {
putchar(b);
b++;
}
putchar('\n');

return (0);
}
