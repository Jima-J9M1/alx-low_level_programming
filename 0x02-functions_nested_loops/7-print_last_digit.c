#include "main.h"
/**
 * print_last_digit - print the absolute value of numbers
 *
 * @r: number that was changed with abs
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l);
		return (-l);
	}
	else
	{
		_putchar(l);
		return (l);
	}
}
