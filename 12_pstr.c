#include "monty.h"
/**
 * pstr - prints a whole string
 * @stack: input stack address
 * @line_num: current line number
 */
void pstr(stack_t **stack, unsigned int line_num)
{
	stack_t *current = NULL;

	(void) line_num;
	current = *stack;
	while (current != NULL)
	{
		if (current->n > 0 && isascii(current->n))
		{
			printf("%c", current->n);
			current = current->next;
		}
		else
			break;
	}
	printf("\n");
}
