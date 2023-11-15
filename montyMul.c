#include "monty.h"
/**
 * montyMul - func gets product of the top two elements.
 * @head: param - stack head
 * @counter: param - line position
*/
void f_mul(stack_t **head, unsigned int counter)
{
	int l;
	int result;
	stack_t *h;

	h = *head;
	for (l = 0; h != NULL; l++)
		h = h->next;
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.p_file);
		free(bus.cont);
		clear_me(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	result = h->next->n * h->n;
	h->next->n = result;
	*head = h->next;
	free(h);
}
