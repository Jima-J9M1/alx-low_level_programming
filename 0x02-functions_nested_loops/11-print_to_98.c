#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 - print natural number from n to 98
 *
 * @n: number that will start to count
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
int i = n;
if (n > 98)
{
for (i = n; i > 98; i--)
{
printf("%d, ", i);
}
}
else if (n < 98)
{
for (i = n; i < 98; i++)
{
printf("%d, ", i);
}
}
printf("%d\n", i);
}
