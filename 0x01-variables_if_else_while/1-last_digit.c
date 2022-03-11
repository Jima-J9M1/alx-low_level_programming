#include <stdlib.h>
#include <stdio.h>
/**
 * main - Determines either greater than 5, is less than 6, or is 0
 *
 * Return: Always 0 (Success)
 */
int mian(void)
{
int n;
n = rand() - RAND_MAX / 2;
int ld = n % 10;
if (ld > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, ld);
}
else if (ld < 6 && ld > 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
}
else if (id == 0)
{
printf("Last digit of %d is %d is 0 and is 0\n", n, ld);
}

}
