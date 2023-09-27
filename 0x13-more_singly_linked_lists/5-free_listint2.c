#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head:listint_t list to be freed
 *
 */
void free_listint2(listint_t **head)
{
listint_t *on;
if (head == NULL)
return;
while (*head)
{
on = (*head)->next;
free(*head);
*head = on;
}
*head = NULL;
}
