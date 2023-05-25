#include "monty.h"
/**
 * mod - check the code
 * @j: stack
 * @n: number
 * Return: Always 0.
 */
void mod(stack_t **j, __attribute__((unused))unsigned int n)
{
stack_t *first = *j;
stack_t *second;
if (first)
{
if (first->next)
{
second = first->next;
if (first->n != 0)
{
second->n = second->n % first->n;
free(first);
second->prev = NULL;
*j = second;
}
}
}
}
