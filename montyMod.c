#include "monty.h"
/**
 * montyMod - func computes mod of first two members
 * @head: param - stack head
 * @counter: param - line position
*/
void montyMod(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	int l;
	int result;

	hd = *head;
	for (l = 0; hd != NULL; l++)
		hd = hd->next;
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(stub.p_file);
		free(stub.cont);
		clear_me(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	if (hd->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(stub.p_file);
		free(stub.cont);
		clear_me(*head);
		exit(EXIT_FAILURE);
	}
	result = hd->next->n % hd->n;
	hd->next->n = result;
	*head = hd->next;
	free(hd);
}
