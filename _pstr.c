#include "monty.h"
/**
 * _pstr - prints the string starting at the top of stack
 * @head: stack head
 * @count: line_number
*/
void _pstr(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
