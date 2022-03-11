#include <stdlib.h>
#inlcude <ctype.h>
#include <stdio.h>
/**
 * main - determine the lowercase of alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char al[26] = "abcdefghijklmnopqrstuvwxyz";
for(int i=0;i <= 26;i++)
{
putchar(tolower(al[i]));
}
return (0);
} 
