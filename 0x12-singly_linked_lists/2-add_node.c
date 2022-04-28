#include "lists.h"
/**
 * add_node - return the address of newNode
 * @head: postion counter linked list
 * @str: string
 * Return: Always Success(0)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t i;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);


	newNode->str = strdup(str);


	while (str[i] != "\0")
		i++;

	newNode->len = i;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
