#include "monty.h"
/**
 * handle_input - check the code
 * @j: stack
 * @p: number
 * Return: Always 0.
 */
void handle_input(instruction_t **instruction, stack_t **j, unsigned int p)
{
unsigned int q, y;
int neg = -1;
int i = 0;
char opcode[5];
char *pus = "push", *pal = "pall", *pin = "pint", *po = "pop", *swa = "swap";
char *ad = "add", *no = "nop", *su = "sub", *di = "div", *mo = "mod"; 
char *mu = "mul";
char *command;
instruction_t *instruct = *instruction;
command = instruct->opcode;
while (command[i] >= 97 && command[i] <= 122)
{
opcode[i] = command[i];
i++;
}
opcode[i] = '\0';
y = (unsigned int)neg;
q = check_number(command + i);
instruct->opcode = opcode;
if (strcmp(opcode, pus) == 0)
{
if (q != y)
instruct->f = &push;
else
{
fprintf(stderr, "L%d: usage: push integer\n", p);
exit(EXIT_FAILURE);
}
}
else if (strcmp(opcode, pal) == 0)
instruct->f = &pall;
else if (strcmp(opcode, pin) == 0)
if (get_total(j) > 0)
instruct->f = &pint;
else
{
fprintf(stderr, "L%d: can't pint, stack empty\n", p);
exit(EXIT_FAILURE);
}
else if (strcmp(opcode, po) == 0)
{
if (get_total(j) >= 2)
instruct->f = &pop;
if (get_total(j) == 0)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", p);
exit(EXIT_FAILURE);
}
if (get_total(j) == 1)
instruct->f = &nop;
}
else if (strcmp(opcode, swa) == 0)
if (get_total(j) >= 2)
instruct->f = &swap;
else
{
fprintf(stderr, "L%d: can't swap, stack too short\n", p);
exit(EXIT_FAILURE);
}
else if (strcmp(opcode, ad) == 0)
if (get_total(j) >= 2)
instruct->f = &add;
else
{
fprintf(stderr, "L%d: can't add, stack too short\n", p);
exit(EXIT_FAILURE);
}
else if (strcmp(opcode, no) == 0)
instruct->f = &nop;
else if (strcmp(opcode, su) == 0)
if (get_total(j) >= 2)
instruct->f = &sub;
else
{
fprintf(stderr, "L%d: can't sub, stack too short\n", p);
exit(EXIT_FAILURE);
}
else if (strcmp(opcode, di) == 0)
instruct->f = &divv;
else if (strcmp(opcode, mo) == 0)
instruct->f = &mod;
else if (strcmp(opcode, mu) == 0)
instruct->f = &mul;
else
opcode_error(opcode, p);
instruct->f(j, q);
}
