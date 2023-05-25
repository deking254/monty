#include "monty.h"
void push(stack_t **head, unsigned int p)
{
stack_t *new;
new = malloc(sizeof(stack_t));
if (new)
new->n = p;
new->prev = NULL;
new->next = *head;
*head = new;
}
