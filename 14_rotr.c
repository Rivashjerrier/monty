#include "monty.h"
/**
 * rotr - rotate right
 * @stack: input stack address
 * @line_num: current line number
 */
void rotr(stack_t **stack, unsigned int line_num)
{
	stack_t *first, *last;

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
	*stack = last;
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}
