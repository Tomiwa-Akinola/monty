#include "monty.h"
/**
 * _swap - adds top two elements of the stack.
 * @head: stack head
 * @count: line_number
*/
void _swap(stack_t **head, unsigned int count)
{
	stack_t *i;
	int len = 0, aux;

	i = *head;
	while (i)
	{
		i = i->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack_(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	aux = i->n;
	i->n = i->next->n;
	i->next->n = aux;
}
