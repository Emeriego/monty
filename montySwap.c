#include "monty.h"
/**
 * montySwap - adds the top two elements of the stack.
 * @head: param - stack head
 * @counter: param - line position
*/
void montySwap(stack_t **head, unsigned int counter)
{
	int result, l;
	stack_t *hd;

	hd = *head;
	for (l = 0; hd != NULL; l++)
		hd = hd->next;
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(stub.p_file);
		free(stub.cont);
		clear_me(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	result = hd->n;
	hd->n = hd->next->n;
	hd->next->n = result;
}
