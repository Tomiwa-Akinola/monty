#include "monty.h"
/**
 * _queue - prints the top
 * @head: stack head
 * @count: line_number
*/
void _queue(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	bus.lifi = 1;
}

/**
 * add_queue - add node to the tail stack
 * @newv: new_value
 * @head: head of the stack
 * Return: no return
*/
void add_queue(stack_t **head, int newv)
{
	stack_t *new_node, *sec;

	sec = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->newv = newv;
	new_node->next = NULL;
	if (sec)
	{
		while (sec->next)
			sec = sec->next;
	}
	if (!sec)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		sec->next = new_node;
		new_node->prev = sec;
	}
}
