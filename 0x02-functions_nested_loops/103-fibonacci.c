able File  31 lines (26 sloc)  388 Bytes

#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 * starting with 1 and 2
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (i == 49)
		{
			printf("\n");
		} else
		{
			printf(", ");
		}
	}
	return (0);
}
