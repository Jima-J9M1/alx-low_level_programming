#include "main.h"
/**
 * times_table - print multiplication of 0 to 9
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{

_putchar((j * i)  + ('0'));
if (j != 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
