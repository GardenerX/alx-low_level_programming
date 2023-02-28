#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s:input
 *
 * Return: 0 (success)
 */
int _strlen(char *s)
{
char *str = "My first strlen!";
  s = &*str;

printf("%ld\n", strlen(s));
return (0);
}
