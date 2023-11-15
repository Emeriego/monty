#include "monty.h"
/**
* montyRun - func runs opcode
* @stack: param head of linked list.
* @counter: param - line position.
* @file: param - ptr to opcode file.
* @content: param - line content
*/
int montyRun(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", montyPush}, {"pall", montyPall}, {"pint", montyPint},
				{"pop", montyPop}, {"swap", montySwap}, {"add", montyAdd},
				{"nop", montyNop}, {"sub", montySub}, {"div", montyDiv},
				{"mul", montyMul}, {"mod", montyMod}, {"pchar", montyPchar},
				{"pstr", montyPstr}, {"rotl", montyRotl}, {"rotr", montyRotr},
				{"queue", montyQueue}, {"stack", montyStack}, {NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
