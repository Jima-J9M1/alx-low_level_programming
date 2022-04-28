#include "lists.h"
/**
 * list_len - return the number of element in linked list
 * @h: linked list
 * Return: Always Success(0)
*/

size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
