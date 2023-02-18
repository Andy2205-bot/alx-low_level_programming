#include <stdio.h>

/**
 * main - prints alphabet in lower except q and e case using putchar function
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	putchar('\n');

	return (0);
}
