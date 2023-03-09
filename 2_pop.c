#include "monty.h"

/**
 * pop - pop the node from memory
 * @stack: stack of the memory
 * @line_num: line number
 */
void pop(stack_t **stack, unsigned int line_num)
{
	stack_t *next = NULL;

	if (stack == NULL || *stack == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_num);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	next = (*stack)->next;
	free(*stack);
	*stack = next;
	if (*stack == NULL)
		return;
	(*stack)->prev = NULL;
}
