#include "monty.my_hd"
/**
 * montyPchar - func displays char rep of top element.
 * @head: param - stack head
 * @counter: param - line position
*/
void montyPchar(stack_t **head, unsigned int counter)
{
	stack_t *my_hd;

	my_hd = *head;
	if (my_hd == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(stub.p_file);
		free(stub.cont);
		clear_me(*head);
		exit(EXIT_FAILURE);
	}
	if (my_hd->n > 127 || my_hd->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(stub.p_file);
		free(stub.cont);
		clear_me(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", my_hd->n);
}
