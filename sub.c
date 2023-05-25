#include "monty.h"
/**
 * sub - check the code
 * @j: stack
 * @n: number
 * Return: Always 0.
 */
void sub(stack_t **j, __attribute__((unused))unsigned int n)
{
stack_t *first = *j;
stack_t *second;
if (first)
{
if (first->next)
{
second = first->next;
second->n = second->n - first->n;
free(first);
second->prev = NULL;
*j = second;
}
}
}
