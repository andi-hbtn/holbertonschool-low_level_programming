#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node;
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL || str == NULL)
	{
		return NULL;
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return new_node;
}