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
int x = 'A';
while (x <= 'Z')
{
putchar(tolower(x));
x++;
}
putchar(' ');
return (0);
}
