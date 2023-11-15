#include "monty.h"
/**
 * addqueue - func adds node to bottom.
 * @n: param - new entry
 * @head: param - head stack
*/
void montyAddqueue(stack_t **head, int n)
{
	stack_t *new_entry;

    stack_t *result = *head;
	new_entry = malloc(sizeof(stack_t));
	if (new_entry == NULL)
		printf("Error\n");
	new_entry->n = n;
	new_entry->next = NULL;
	if (result)
		while (result->next)
			result = result->next;
	if (!result)
	{
		*head = new_entry;
		new_entry->prev = NULL;
	}
	else
	{
		result->next = new_entry;
		new_entry->prev = result;
	}
}
