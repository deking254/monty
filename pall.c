#include "monty.h"
/**
 * pall - check the code
 * @j: stack
 * Return: Always 0.
 */
void pall(stack_t **j, __attribute__((unused))unsigned int q)
{
stack_t *k = *j;
while (k)
{
printf("%d\n", k->n);
k = k->next;
}
}
