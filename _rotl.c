#include "monty.h"
/**
  *_rotl- rotates stack to the top
  *@head: stack head
  *@count: line_number
 */
void _rotl(stack_t **head,  __attribute__((unused)) unsigned int count)
{
	stack_t *tmp = *head, *sec;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	sec = (*head)->next;
	sec->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = sec;
}
