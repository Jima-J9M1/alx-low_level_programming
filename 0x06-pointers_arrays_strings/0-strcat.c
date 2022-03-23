#include "main.h"
/**
 * _strcat - function that concat two string
 * @dest: parameter that accept the first string
 * @src: parameter that accept the second string
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
int j = 0;
int i = 0;
while (*(src + i) != '\0')
{
i++;
}
while (*(src + j) != '\0')
{
*(dest + i) = *(src + j)
j++;
i++;
}
return (dest);
}
