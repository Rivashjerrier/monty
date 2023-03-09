#include "monty.h"
/**
 * _div - divide top 2 numbers
 * @stack: inout stack address
 * @line_num: current lin num
 */
void _div(stack_t **stack, unsigned int line_num)
{
	stack_t *current = NULL;
	int total = 0;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't div, stack too short\n", line_num);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		printf("L%d: division by zero\n", line_num);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	current = *stack;

	total = current->next->n / current->n;

	pop(stack, line_num);

	(*stack)->n = total;
}
