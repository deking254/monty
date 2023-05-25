#include "monty.h"
/**
 * swap - check the code
 * @j: stack
 * @n: number
 * Return: Always 0.
 */
void swap(stack_t **j, __attribute__((unused))unsigned int n)
{
stack_t *first = *j;
stack_t *third;
stack_t *second;
if (first)
{
if (first->next)
{
second = first->next;
third = second->next;
first->next = third;
second->prev = NULL;
first->prev = second;
second->next = first;
if (third)
third->prev = first;
*j = second;
}
}
}
