#include "monty.h"

/**
 * pint - print the top of the stack
 * @stack: stack of the memory
 * @line_num: line number
 */
void pint(stack_t **stack, unsigned int line_num)
{
	if (stack == NULL || *stack == NULL)
	{
		printf("L%d: can't pint, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
