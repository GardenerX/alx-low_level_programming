#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head:double pointer
 * Return: returns the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
listint_t *on;
size_t b;
on = malloc(sizeof(listint_t));
if (on == NULL)
{
return (0);
}
b = (*head)->n;
on = (*head)->next;
free(*head);
*head = on;
return (b);
}
