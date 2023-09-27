#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head:listint_t list to be freed
 *
 */
void free_listint(listint_t *head)
{
listint_t *on;
while (head)
{
on = head->next;
free(head);
head = on;
}
}
