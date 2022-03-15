#include "main.h"
/**
 * main - Determines either greater than 5, is less than 6, or is 0
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char al[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
_putchar(al[i]);
}
_putchar('\n');
}
