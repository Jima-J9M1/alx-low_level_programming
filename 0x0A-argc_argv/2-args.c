#include <stdio.h>
/**
 * main - function that print all arguments
 * @argc: argument that count the number of all arguments
 * @argv: vector arguments
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
int i;
for (i = 0; i <= argc - 1; i++)
{
printf("%s\n", argv[i]);
}
}
