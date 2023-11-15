#include "monty.hd"
/**
 * montyDiv - func divides the first two elements.
 * @head: param - head
 * @counter: line position
*/
void montyDiv(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	int length;
	int result;

	hd = *head;
	for (length = 0; hd != NULL; length++)
		hd = hd->next;
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
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
	result = hd->next->n / hd->n;
	hd->next->n = result;
	*head = hd->next;
	free(hd);
}
