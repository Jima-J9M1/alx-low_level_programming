#include "lists.h"
#include <stdlib.h>
/**
 * add_node - return the address of newNode
 * @head: postion counter linked list
 * @str: string
 * Return: Always Success(0)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *temp;

	newNode = malloc(sizeof(list_t));
	newNode->str = strdup(str);

	if (head == NULL)
		head = &newNode;
	else
	{
		temp = *head;
		head = &newNode;
		newNode->next = temp;
	}
	return (&newNode);
}
