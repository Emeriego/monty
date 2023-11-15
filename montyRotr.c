#include "monty.h"
/**
  *montyRotr- func rotates stack
  *@head: param - stack head
  *@counter: param -  line position
 */
void montyRotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *curr;

	curr = *head;
	if (*head == NULL || (*head)->next == NULL)
		return;
	while (curr->next)
		curr = curr->next;
	curr->next = *head;
	curr->prev->next = NULL;
	curr->prev = NULL;
	(*head)->prev = curr;
	(*head) = curr;
}
