#include "main.h"
/**
 * print_alphabet - Determines either greater than 5, is less than 6, or is 0
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char al[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
int j = 0;
while (j < 10)
{
for (i = 0; i < 26; i++)
{
_putchar(al[0]);
}
j++;
}
}

