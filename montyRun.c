#include "monty.h"
/**
* montyRun - func runs opcode
* @stack: param head of linked list.
* @counter: param - line position.
* @file: param - ptr to opcode file.
* @content: param - line content.
* Return: returns 1.
*/
int montyRun(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	char *operator;
	instruction_t tally[] = {
				{"push", montyPush}, {"pall", montyPall}, {"pint", montyPint},
				{"pop", montyPop}, {"swap", montySwap}, {"add", montyAdd},
				{"nop", montyNop}, {"sub", montySub}, {"div", montyDiv},
				{"mul", montyMul}, {"mod", montyMod}, {"pchar", montyPchar},
				{"pstr", montyPstr}, {"rotl", montyRotl}, {"rotr", montyRotr},
				{"queue", montyQueue}, {"stack", montyStack}, {NULL, NULL}
				};
	unsigned int idx;
	int a = 7, d = 2;

	operator = strtok(content, " \n\t");
	montyExch(a, d);
	if (operator && operator[0] == '#')
		return (0);
	stub.myarg = strtok(NULL, " \n\t");
	for (idx = 0; tally[idx].opcode && operator; idx++)
		if (strcmp(operator, tally[idx].opcode) == 0)
		{	tally[idx].f(stack, counter);
			return (0);
		}
	if (operator && tally[idx].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, operator);
		montyBus(1, 8);
		fclose(file);
		free(content);
		clear_me(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
