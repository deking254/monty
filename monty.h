#ifndef _MONTY_H_
#define _MONTY_H_
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void push(stack_t **head, unsigned int p);
void handle_input(instruction_t **instruction, stack_t **j, unsigned int b);
void pall(stack_t **j, unsigned int i);
void pint(stack_t **h, unsigned int y);
void pop(stack_t **l, unsigned int c);
void swap(stack_t **a, unsigned int n);
void add(stack_t **d, unsigned int m);
void nop(stack_t **e, unsigned int k);
void sub(stack_t **f, unsigned int g);
void divv(stack_t **h, unsigned int l);
void mod(stack_t **o, unsigned int p);
void mul(stack_t **r, unsigned int s);
void opcode_error(char *opcode, int line);
int check_number(char *c);
int get_total(stack_t **j);
#endif
