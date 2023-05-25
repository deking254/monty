#include "monty.h"
/**
 * main - check the code
 * @argv: stack
 * @argc: number
 * Return: Always 0.
 */
void print_params_error(void);
void print_open_error(char *filename);
int main(int argv, char *argc[])
{
int fd, i = 0, q = 0, m = 0, v = 0, k = 0;
ssize_t rd;
unsigned int b = 1;
instruction_t *t;
char buf[1024];
char command[1024];
stack_t *j = NULL;
if (argv == 2)
{
fd = open(argc[1], O_RDONLY);
if (fd == -1)
print_open_error(argc[1]);
else
{
t = malloc(sizeof(instruction_t));
rd = read(fd, buf, 1024);
if (t)
{
if (rd != -1)
{
while (buf[i] > 0 )
{
if (buf[i] == '\n')
{
command[q] = '\0';
v++;
}
else
command[q] = buf[i];
q++;
i++;
}
while (m < q)
{
if (m == 0)
{
t->opcode = command;
t->f = NULL;
handle_input(&t, &j, b);
b++;
k++;
}
if (command[m] == '\0')
{
m += 1;
if (k < v)
{
t->opcode = command + m;
t->f = NULL;
handle_input(&t, &j, b);
b++;
k++;
}
}
m++;
}
close(fd);
free(j);
free(t);
}
}
}
}
if (argv != 2)
printf("were\n");
return (0);
}


/**
 * print_params_error - check the code
 * @params: number
 * Return: Always 0.
 */
void print_params_error(void)
{
printf("USAGE: monty file\n");
exit(EXIT_FAILURE);
}

/**
 * print_open_error - check the code
 * @filename: number
 * Return: Always 0.
 */
void print_open_error(char *filename)
{
fprintf(stderr, "Error: Can't open file %s\n", filename);
exit(EXIT_FAILURE);
}

