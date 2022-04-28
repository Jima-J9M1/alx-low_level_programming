#include <stdlib.h>
#include "lists.h"
/**
 * print_list - unsigned function that return Positive integer
 * @h: structure
 * Return: Always Success (0)
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;


	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);

		}
		h = h->next;
		count++;
	}
	return (count);
}
