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
instruct->f = &pint;
else if (strcmp(opcode, po) == 0)
instruct->f = &pop;
else if (strcmp(opcode, swa) == 0)
instruct->f = &swap;
else if (strcmp(opcode, ad) == 0)
instruct->f = &add;
else if (strcmp(opcode, no) == 0)
instruct->f = &nop;
else if (strcmp(opcode, su) == 0)
instruct->f = &sub;
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
