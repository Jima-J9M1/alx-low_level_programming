#include<stdlib.h>
#include<stdio.h>
/**
 * main - determine the 16 base
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char base[16] = "0123456789abcdf";
int i;
for (i = 0; i < 16; i++)
{
putchar(base[i]);
}
putchar('\n');
return (0);
}
