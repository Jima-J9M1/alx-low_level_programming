#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints the two sum
 * @argc: paramter of the function
 * @argv: vector arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
