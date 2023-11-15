#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/
void clear_me(stack_t *head)
{
	stack_t *result = head;

	while (head != NULL)
	{
		result = head->next;
		free(head);
		head = result;
	}
}
