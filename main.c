#include "monty.h"
#include "vars.h"
#include <stdio.h>
/**
* main - main monty code runner.
* @argc: arguments count.
* @argv: argument vector - the file to be interpreted.
* Return: returns success.
*/
int main(int argc, char *argv[])
{
	ssize_t rdLine = 1;
	unsigned int c = 0;
	char *cont;
	stack_t *my_stack = NULL;
	FILE *p_file;
	size_t my_sz = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	p_file = fopen(argv[1], "r");
	stub.p_file = p_file;
	if (!p_file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (rdLine > 0)
	{
		cont = NULL;
		rdLine = getline(&cont, &my_sz, p_file);
		stub.cont = cont;
		c++;
		if (rdLine > 0)
			montyRun(cont, &my_stack, c, p_file);
		free(cont);
	}
	clear_me(my_stack);
	fclose(p_file);
return (0);
}
