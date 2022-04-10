#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - returns positive or negative numbers
 * Return: returns 0 if program exits well
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
