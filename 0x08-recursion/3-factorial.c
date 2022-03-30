#include "main.h"

/**
 * factorial - print the number of factorial
 * @n: integer parameter
 * Return: Always 0(Success)
 */
int factorial(int n)
{
int res = 1;
if (n < 0)
return (-1);
else
{
res = n * factorial(n - 1);
return (res);
}
return (0);
}
