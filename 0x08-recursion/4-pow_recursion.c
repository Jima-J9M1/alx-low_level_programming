#include "main.h"

/**
 * _pow_recursion - print the power the integers
 * @x: parameter of the function
 * @y: integer parameter of the function
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else
{
return (x * _pow_recursion(x, y - 1));
}
