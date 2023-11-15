#include "monty.h"
/**
 * montyPop - func prints the first element
 * @head: param - stack head
 * @counter: param  - line position
*/
void montyPop(stack_t **head, unsigned int counter)
{
	stack_t *my_hd;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(stub.p_file);
		free(stub.cont);
		clear_me(*head);
		exit(EXIT_FAILURE);
	}
	my_hd = *head;
	*head = my_hd->next;
	free(my_hd);
}
