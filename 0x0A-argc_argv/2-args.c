#include "main.h"
#include <stdio.h>

/**
 * main - prints all the arguments it receives
 * @argc:number of arguments
 * @argv:arguments
 *
 * Return:Always 0 (success)
 */
int main(int argc, char *argv[])
{
int argcs;
for (argcs = 0; argcs < argc; argcs++)
{
printf("%s\n", argv[argcs]);
}
return (0);
}
