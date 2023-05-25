#include "monty.h"
/**
 * opcode_error - check the code
 * @opcode: stack
 * @line: numbr
 * Return: Always 0.
 */
void opcode_error(char *opcode, int line)
{
fprintf(stderr, "L%d: unknown instruction %s\n", line, opcode);
exit(EXIT_FAILURE);
}
