#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc:number of arguments
 * @argv:arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%i\n", argc - 1);
return (0);
}
