#include "main.h"
/**
 * add - add two integer
 *
 * @r: number one
 * @m: number two
 * Return: Always 0 (Success)
 */
int add(int r, int m)
{
int k;
k = r + m;
if (k <= 9)
{
_putchar(k + 48);
}
else
{
_putchar((k / 10) + 48);
_putchar((k % 10) + 48);
}
return (0);
}
