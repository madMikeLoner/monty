#include "monty.h"

/**
 * get_code - gets the code and pushes
 * @string: line of code
 * Return: the code
 */
char *get_opcode(char *string)
{
	char *opcode;

	/** grabs first argument **/
	opcode = strtok(string, "\n\t ");
	return (opcode);
}
