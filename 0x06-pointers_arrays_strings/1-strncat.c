#include "main.h"
\**
* _strncat - concatenates two strings,
* @dest: parameter that accept first parameter
* @src: parameter that accept the second parameter
* @n: length of string to be concat
* Return: Always 0
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (*(dest + i) != '\0')
{
i++
}
while ((*(src + j) != '\0') || (j < n))
{
*(dest + i) = *(src + j);
i++;
j++;
}
return (dest);
}
