#include "monty.h"
/**
 * pop - check the code
 * @y: y
 * @h: stack
 * Return: Always 0.
 */
void pop(stack_t **h, __attribute__((unused))unsigned int y)
{
stack_t *top = *h;
stack_t *next;
if (top)
{
next = top->next;
free(next->prev);
next->prev = NULL;
*h = next;
}
}
