#include <stdlib.h>
#include <stdio.h>
/**
 * main - determine the combination of digits
 *
 * Return: Alwas 0 (success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');
return (0);
}
