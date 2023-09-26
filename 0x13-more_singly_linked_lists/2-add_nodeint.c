#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list.
 * @head:double pointer
 * @n:input
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *on;
on = malloc(sizeof(listint_t));
if (on == NULL)
{
return (NULL);
}
on->n = n;
on->next = *head;
*head = on;
return (*head);
}
