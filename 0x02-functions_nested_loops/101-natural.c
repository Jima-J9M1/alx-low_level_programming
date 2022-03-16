#include <stdio.h>
/**
 * main - determine the multiple of 3 and 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n=0;
int sum = 0;
while (n >= 1024)
{
if (n % 3 == 0 || n % 5 == 0)
{
sum += n;
}
n +=1;
}
printf("%d\n", n);
return (0);
}
