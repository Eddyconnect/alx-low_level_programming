#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Determine if a random number is positiv, negative or zero
 *
 *Return: always 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is positive\n", n);
if (n == 0)
	printf("%d is zero\n", n);
if (n < o)
{
	printf("%d is negative\n", n);
}
return (0);
}
