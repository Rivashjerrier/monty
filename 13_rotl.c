#include "monty.h"
/**
 * rotl - rotate left
 * @stack: input stack address
 * @line_num: current line number
 */
void rotl(stack_t **stack, unsigned int line_num)
{
	stack_t *first = NULL, *last = NULL;

	(void) line_num;
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return;

	first = last = *stack;

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = first;
	first->prev = last;
	*stack = first->next;
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}
