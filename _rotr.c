#include "monty.h"
/**
  *_rotr - rotates stack to bottom
  *@head: stack head
  *@count: line_number
  */
void _rotr(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *cpy;

	cpy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cpy->next)
	{
		cpy = cpy->next;
	}
	cpy->next = *head;
	cpy->prev->next = NULL;
	cpy->prev = NULL;
	(*head)->prev = cpy;
	(*head) = cpy;
}
