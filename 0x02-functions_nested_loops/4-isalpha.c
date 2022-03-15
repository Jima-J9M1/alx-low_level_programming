#include "main.h"
/**
* _isalpha - checks if the character is alphabet
*
* @c: character that would be checked
* Return: Always 0 (Success)
*/
int _isalpha(int c)
{
if ( (c >= 65 && c <= 122) && ( !(c > 90 && c < 97)) )
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
