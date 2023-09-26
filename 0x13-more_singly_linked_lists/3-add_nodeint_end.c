#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head:double pointer
 * @n:input
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *on;
listint_t *other;
other = *head;
on = malloc(sizeof(listint_t));
if (on == NULL)
{
return (NULL);
}
on->n = n;
on->next = NULL;
if (*head == NULL)
{
*head = on;
return (on);
}
while (other->next)
other = other->next;
other->next = on;
return (on);
}
