#include "monty.h"
/**
 * montyPush - func pushes node to stack
 * @head: param - stack head
 * @counter: param - line position
*/
void montyPush(stack_t **head, unsigned int counter)
{
	int n, count = 0, f = 0;

	if (bus.myarg)
	{
		if (bus.myarg[0] == '-')
			count++;
		for (; bus.myarg[count] != '\0'; count++)
		{
			if (bus.myarg[count] > 57 || bus.myarg[count] < 48)
				f = 1; 
		}
		if (f == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.p_file);
			free(bus.cont);
			clear_me(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.p_file);
		free(bus.cont);
		clear_me(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(bus.myarg);
	if (bus.fin == 0)
		montyAddnode(head, n);
	else
		montyAddqueue(head, n);
}
