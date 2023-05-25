#include "monty.h"
/**
 * get_total - check the code
 * @j: stack
 * Return: Always 0.
 */
int get_total(stack_t **j)
{
int i = 0;
stack_t *stack = *j;
while (stack)
{
stack = stack->next;
i++;
}
return (i);
}
