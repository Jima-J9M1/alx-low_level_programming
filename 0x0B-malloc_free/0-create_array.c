#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 * @size: determine the size of the array
 * @c: character paramters
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
int i;
if (size == 0)
return (NULL);
ptr = malloc(sizeof(c) * size);
if (ptr == NULL)
return (NULL);

for (i = 0; i < n; i++)
{
ptr[i] = c;
}
return (ptr);

}
