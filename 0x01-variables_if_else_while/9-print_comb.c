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
for (i = 0; i < 9; i++)
{
putchar(i + '0');
putchar(", ");
}
putchar(i + '0');
putchar('\n');
return (0);
}
