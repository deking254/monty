#include "monty.h"
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
exit(1);
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
return (0);
}
