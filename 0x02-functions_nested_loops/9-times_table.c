#include "main.h"
/**
 * times_table - print multiplication of 0 to 9
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int i, j, k;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
k = j * i;
_putchar(k + '0');
if (j != 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
