#include "monty.h"
/**
* free_stack_ - frees a doubly linked list
* @head: head of the stack
*/
void free_stack_(stack_t *head)
{
	stack_t *sec;

	sec = head;
	while (head)
	{
		sec = head->next;
		free(head);
		head = sec;
	}
}
