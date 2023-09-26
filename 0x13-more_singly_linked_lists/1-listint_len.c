#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements
 * in a linked listint_t list.
 * @h:pointer
 * Return: n
 */
size_t listint_len(const listint_t *h)
{
size_t n;
for (n = 0; h; n++)
{
h = h->next;
}
return (n);
}
