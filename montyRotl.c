#include "monty.h"
/**
  *montyRotl- func rotates the stack.
  *@head: param - stack head
  *@counter: param - line position
 */
void montyRotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *curr;
	stack_t *result;

	curr = *head;
	if (*head == NULL || (*head)->next == NULL)
		return;
	result = (*head)->next;
	result->prev = NULL;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = *head;
	(*head)->next = NULL;
	(*head)->prev = curr;
	(*head) = result;
}
