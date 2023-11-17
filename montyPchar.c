#include "monty.h"
/**
 * montyPchar - func displays char rep of top element.
 * @head: param - stack head
 * @counter: param - line position
*/
void montyPchar(stack_t **head, unsigned int counter)
{
	stack_t *my_hd;
	int a = 5, b = 1;

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
		montyBus(a, b);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", my_hd->n);
}
