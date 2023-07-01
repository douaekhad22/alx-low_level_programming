#include <stdlib.h>
#include <time.h>
/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf(n, "is positive");
	}
	if (n < 0)
	{
	printf(n, "is negative");
	}
	if (n == 0)
	{
	printf(n, "is zero");	
	}
	return (0);
}
