#include "monty.h"

/**
 * pchar - print the top of stack in character
 * @stack: stack of the memory
 * @line_num: line number
 */
void pchar(stack_t **stack, unsigned int line_num)
{
	if (stack == NULL || *stack == NULL)
	{
		printf("L%d: can't pchar, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}
	if (!(isascii((*stack)->n)))
	{
		printf("L%d: can't pchar, value out of range\n", line_num);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
