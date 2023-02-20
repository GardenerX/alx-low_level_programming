#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry Point
 *
 * main :  print the last digit of the number stored in the variable n
 *
 * Return: Always 0 (success)
 */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Last digit of %d", n);
printf(" ");
if
(n > 5)
{
printf("and is greater than 5");
}

else if
(n < 6, n != 0)
{
printf("and is less than 6 and not 0");
}
else
{
printf("and is 0");
}

return (0);
}
