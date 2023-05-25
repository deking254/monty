#include "monty.h"
void handle_input(instruction_t **instruction, stack_t **j, __attribute__((unused))unsigned int p)
{
unsigned int q;
int i = 0;
char opcode[5];
char *pus = "push";
char *pal = "pall";
char *pin = "pint";
char *po = "pop";
char *swa = "swap";
char *ad = "add";
char *no = "nop";
char *su = "sub";
char *di = "div";
char *mo = "mod";
char *mu = "mul";
char *command;
instruction_t *instruct = *instruction;
command = instruct->opcode;
while (command[i] >= 97 && command[i] <= 122)
{
opcode[i] = command[i];
i++;
}
q = atoi(command + i);
opcode[i] = '\0';
instruct->opcode = opcode;
if (strcmp(opcode, pus) == 0)
instruct->f = &push;
if (strcmp(opcode, pal) == 0)
instruct->f = &pall;
if (strcmp(opcode, pin) == 0)
instruct->f = &pint;
if (strcmp(opcode, po) == 0)
instruct->f = &pop;
if (strcmp(opcode, swa) == 0)
instruct->f = &swap;
if (strcmp(opcode, ad) == 0)
instruct->f = &add;
if (strcmp(opcode, no) == 0)
instruct->f = &nop;
if (strcmp(opcode, su) == 0)
instruct->f = &sub;
if (strcmp(opcode, di) == 0)
instruct->f = &divv;
if (strcmp(opcode, mo) == 0)
instruct->f = &mod;
if (strcmp(opcode, mu) == 0)
instruct->f = &mul;
instruct->f(j, q);
}
