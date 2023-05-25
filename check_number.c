#include "monty.h"
/**
 * check_number - check the code
 * @c: c
 * Return: Always 0.
 */
int check_number(char *c)
{
char *end;
long n;
int neg = -1;
n = strtol(c, &end, 10);
if (*end != '\0')
return ((unsigned int)neg);
return ((unsigned int)n);
}
