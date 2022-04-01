#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the sum of the arguments
 * @argc: count the arguments
 * @argv: arguments of the function
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int sum, i;
for (i = 1; i <= argc - 1; i++)
{
if (!isdigit(argv[i])
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
