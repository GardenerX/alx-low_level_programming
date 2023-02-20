#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - ENTRY POINT
 * A program that print whether the random number
 * stored in the variable n is positive or negative.
 * Return: Always 0 (success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
printf("%d", n);

if
	(n > 0)
	{
	    printf("is positive\n");
	}
	else if (n == 0)
	{
	printf("zero\n");
	}
	else
		(n < 0);
	{
		printf("is negative\n");
	}
		return (0);
}
