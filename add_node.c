#include "monty.h"
/**
 * add_node - adds node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void add_node(stack_t **head, int n)
{

	stack_t *new_node, *sec;

	sec = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (sec)
		sec->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
