#include <stdio.h>

/**
 * main - print all possible combination of two-digit number
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit1;
	int digit2;
	int c = 0;

	while (c <= 99)
	{
		digit1 = (c / 10 + '0');
		digit2 = (c % 10 + '0');
		if (digit1 < digit2)
		{
			putchar(digit1);
			putchar(digit2);
			if (c != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
	putchar('\n');

	return (0);
}
