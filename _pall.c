#include "monty.h"
/**
 * _pall - prints stack
 * @head: stack head
 * @count: line number
 */
void _pall(stack_t **head, unsigned int count)
{
	stack_t *i;
	(void)count;

	i = *head;
	if (i == NULL)
		return;
	while (i)
	{
		printf("%d\n", i->n);
		i = i->next;
	}
}
