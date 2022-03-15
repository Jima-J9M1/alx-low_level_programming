#include "main.h"
/**
 * print_last_digit - print the absolute value of numbers
 *
 * @r: number that was changed with abs
 * Return: Always 0 (Success)
 */
int print_last_digit(int r)
{
int i;
i = r % 10;
if (i < 0)
{
_putchar(i);
return (i);
}
else
{
_putchar(-i);
return (-i);
}
}
