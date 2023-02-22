#include "main.h"
/**
 * print_sign - checks the sign of a number
 * @n: a number to be checked
 * Return: 1 and print + if n is greater than 0
 * 0 and print 0 if n = 0
 * -1 and print - if n is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
