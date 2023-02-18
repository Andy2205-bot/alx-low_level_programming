#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to intenger n evertime it executes
 * check whether the number is greater or less than zero or is zero
 * then it prints the number
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	return (0);
}
