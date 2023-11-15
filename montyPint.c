#include "monty.h"
/**
 * montyPint - func displays first element.
 * @head: param stack head
 * @counter: param - line pos.
*/
void montyPint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(stub.p_file);
		free(stub.cont);
		clear_me(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
