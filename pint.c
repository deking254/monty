#include "monty.h"
/**
 * pint - check the code
 * @y: y
 * @h: stack
 * Return: Always 0.
 */
void pint(stack_t **h, __attribute__((unused))unsigned int y)
{
stack_t *top = *h;
if (top)
printf("%d\n",top->n);
}
