#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc:number of arguments
 * @argv:arguments
 *
 * Return: 0 (success), 1 (error)
 */
int main(int argc, char *argv[])
{
int w, f;
if (argc == 3)
{
w = atoi(argv[1]);
f = atoi(argv[2]);
printf("%d\n", w *f);
return (0);
}
else
printf("Error\n");
return (1);
}
