#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: first node in the linked list
 * @index:  is the index of the node, starting at 0
 *
 * Return: the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a = 0;
listint_t *on = head;
while (on && a < index)
{
on = on->next;
a++;
}
return (on ? on : NULL);
}
