#include "monty.h"
void print_zero_error(char *function, int line)
{
fprintf(stderr, "L%d: %s, by zero\n", line, function);
exit(EXIT_FAILURE);
}
