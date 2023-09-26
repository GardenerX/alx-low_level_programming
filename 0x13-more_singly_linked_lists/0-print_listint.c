#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h:pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t n;
for (n = 0; h; n++)
{
printf("%u\n", h->n);
h = h->next;
}
return (n);
}