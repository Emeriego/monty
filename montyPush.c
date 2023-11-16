#include "monty.h"
/**
 * montyPush - func pushes node to stack
 * @head: param - stack head
 * @counter: param - line position
*/
void montyPush(stack_t **head, unsigned int counter)
{
	int n, count = 0, f = 0;

	if (stub.myarg)
	{
		if (stub.myarg[0] == '-')
			count++;
		for (; stub.myarg[count] != '\0'; count++)
		{
			if (stub.myarg[count] > 57 || stub.myarg[count] < 48)
				f = 1;
		}
		if (f == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(stub.p_file);
			free(stub.cont);
			clear_me(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(stub.p_file);
		free(stub.cont);
		clear_me(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(stub.myarg);
	if (stub.fin == 0)
		montyAddnode(head, n);
	else
		montyAddqueue(head, n);
}
