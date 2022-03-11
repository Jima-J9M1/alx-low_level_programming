#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 0; i < 26; i++)
{
putchar(alp[i]);
}
for (i = 0; i < 26; i++)
{
putchar(toupper(alp[i]));
}
return (0);
}
