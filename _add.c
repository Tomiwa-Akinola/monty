#include "monty.h"
/**
 * _add - adds the top two elements of stack.
 * @head: stack head
 * @count: line_number
*/
void _add(stack_t **head, unsigned int count)
{
	stack_t *h;
	int len = 0, sec;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	sec = h->n + h->next->n;
	h->next->n = sec;
	*head = h->next;
	free(h);
}
