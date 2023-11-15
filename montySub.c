#include "monty.h"
/**
  *montySub- func does sustration
  *@head: param - stack head
  *@counter: param - line position
 */
void montySub(stack_t **head, unsigned int counter)
{
	int nd;
	stack_t *curr;
	int diff;

	nd = 0;
	curr = *head;
	while (curr != NULL)
	{
		curr = curr->next;
		nd++;
	}
	if (nd < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.p_file);
		free(bus.cont);
		clear_me(*head);
		exit(EXIT_FAILURE);
	}
	curr = *head;
	diff = curr->next->n - curr->n;
	curr->next->n = diff;
	*head = curr->next;
	free(curr);
}
