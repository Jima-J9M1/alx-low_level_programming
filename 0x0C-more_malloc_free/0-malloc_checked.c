#include "main.h"
/**
 * malloc_checked - allocate a memory for different data types
 * @b: sizeof the memory
 * Return: Always 0 (Success)
 * if malloc fails, status value is equal to 98
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
if (b > 0 && b < 100000000000000)
{
ptr = malloc(b);
}
else
{
ptr = 98;
}
return (ptr);
}
