#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to add in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *fresh;
list_t *hold = *head;
unsigned int len = 0;
while (str[len])
len++;
fresh = malloc(sizeof(list_t));
if (!fresh)
return (NULL);

fresh->str = strdup(str);
fresh->len = len;
fresh->next = NULL;
if (*head == NULL)
{
*head = fresh;
return (fresh);
}

while (hold->next)
hold = hold->next;
hold->next = fresh;
return (fresh);
}
