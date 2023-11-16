#include "monty.h"
/**
 * montyPall - prints the stack
 * @head: param - stack head
 * @counter: param unused
*/
void montyPall(stack_t **head, unsigned int counter)
{
	stack_t *my_hd;
	(void)counter;

	my_hd = *head;
	if (my_hd == NULL)
		return;
	while (my_hd != NULL)
	{
		printf("%d\n", my_hd->n);
		my_hd = my_hd->next;
	}
}
