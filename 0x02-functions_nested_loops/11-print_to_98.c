#include "main.h"
/**
 * print_to_98 - print natural number from n to 98
 *
 * @n: number that will start to count
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n; i >= 98; i++)
{
_putchar(i + '0');
}
}
else
{
for (i = 0; i <= 98; i++)
{
_putchar(i + '0');
_putchar(',');
}
}
}
