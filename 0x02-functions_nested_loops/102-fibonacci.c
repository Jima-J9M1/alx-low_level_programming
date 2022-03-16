#include <stdio.h>
/**
 * main - determine the fibonacci numbers 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int arr[50];
int i;
arr[0] = 1;
arr[1] = 2;
printf("%d, ", arr[0]);
printf("%d, ", arr[1]);
for (i = 1; i < 50; i++)
{
arr[i + 1] = arr[i] + arr[i - 1];
printf("%d, ", arr[i + 1]);
}
printf("\n");
return (0);
}
