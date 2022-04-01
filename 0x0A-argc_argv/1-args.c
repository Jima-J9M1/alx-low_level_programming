#include <stdio.h>
/**
 * main - function that print the number of the arguments
 * @argc: number of argument
 * @argv: vector arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
