#include <stdlib.h>
#include <time.h>
#include <stdio.h>
# include <math.h>
/* more headers goes here */

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
int k;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Last digit of %d", n);
printf(" ");
k = n % 10;
printf("is %d", k);
printf(" ");
if
(k > 5)
{
printf("and is greater than 5\n");
}

else if
(k < 6 && k != 0)
{
printf("and is less than 6 and not 0\n");
}
else
{
printf("and is 0\n");
}

return (0);
}
