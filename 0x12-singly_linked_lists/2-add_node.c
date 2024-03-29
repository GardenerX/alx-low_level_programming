#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *fresh;
unsigned int len = 0;
while (str[len])
len++;
fresh = malloc(sizeof(list_t));
if (!fresh)
return (NULL);

fresh->str = strdup(str);
fresh->len = len;
fresh->next = (*head);
(*head) = fresh;
return (*head);
}
