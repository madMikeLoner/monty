#include "monty.h"

/**
 * printnc - prints top val with neln
 * @stack: the stack
 * @line_number: the current line number
 *
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stdout, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
