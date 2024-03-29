#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * (n) of a listint_t linked list.
 * @head: first node in the linked list
 *
 * Return: sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *add = head;
while (add)
{
sum += add->n;
add = add->next;
}
return (sum);
}
