#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>

/**
 * struct stack_s - Doubly linked list representation of a stack (or queue).
 * @n: Integer.
 * @prev: Points to the previous element of the stack (or queue).
 * @next: Points to the next element of the stack (or queue).
 *
 * Description: Doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project.
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - Opcoode and its function.
 * @opcode: The opcode.
 * @f: Function to handle the opcode.
 *
 * Description: Opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project.
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct var_struct - Struct for global variable.
 * @arg: Arguments.
 * @input_str: Input string.
 * @SQ: Check for stack or queue.
 * @file: File descripter.
 */
typedef struct var_struct
{
	char *arg;
	char *input_str;
	int SQ;
	FILE *file;
} global_v;

extern global_v arg_holder;
global_v arg_holder;

void make_buffer(char *file_name);
void opcode(char *command, unsigned int line_num, stack_t **stack);
void free_stack(stack_t **head);
void push(stack_t **stack, unsigned int line_num);
void pall(stack_t **stack, unsigned int line_num);
void pint(stack_t **stack, unsigned int line_num);
void pop(stack_t **stack, unsigned int line_num);
void swap(stack_t **stack, unsigned int line_num);
void add(stack_t **stack, unsigned int line_num);
void _div(stack_t **stack, unsigned int line_num);
void mod(stack_t **stack, unsigned int line_num);
void mul(stack_t **stack, unsigned int line_num);
void nop(stack_t **stack, unsigned int line_num);
void sub(stack_t **stack, unsigned int line_num);
void pchar(stack_t **stack, unsigned int line_num);
void pstr(stack_t **stack, unsigned int line_num);
void rotl(stack_t **stack, unsigned int line_num);
void rotr(stack_t **stack, unsigned int line_num);

#endif
