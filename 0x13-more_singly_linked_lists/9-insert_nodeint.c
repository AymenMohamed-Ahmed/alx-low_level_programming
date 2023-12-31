#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index of the list where the new node should be added. It starts at 0.
 * @n: Data for the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 * If it is not possible to add the new node at index idx, do not add
 * the new node and return NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new_node, *current;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

current = *head;
for (i = 0; i < idx - 1 && current != NULL; i++)
current = current->next;

if (current == NULL)
{
free(new_node);
return (NULL);
}

new_node->next = current->next;
current->next = new_node;

return (new_node);
}
