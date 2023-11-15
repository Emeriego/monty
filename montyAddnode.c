#include "monty.h"
/**
 * montyAddnode - func sums head stack
 * @head: param head of stack
 * @n: param new entrant
*/
void montyAddnode(stack_t **head, int n)
{
	stack_t *new_entry;
	stack_t *ux;

	ux = *head;
	new_entry = malloc(sizeof(stack_t));
	if (!new_entry)
	{ 
		printf("Error\n");
		exit(0); 
	}
	if (ux != NULL)
	{
		ux->prev = new_entry;
	}
	new_entry->n = n;
	new_entry->next = *head;
	new_entry->prev = NULL;

	*head = new_entry;
}
