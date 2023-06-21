#include "monty.h"

/**
 * addstack - adds elements on top of stack
 * @stack: stack
 * @line_no - currnet line
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	int summ;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stdout, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	summ = (*stack)->next->n + (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = summ;
}
