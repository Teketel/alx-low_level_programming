#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int c, d;

	for (c = (int) '0'; c <= (int) '9'; c++)
	{
		for (d = c + 1; d <= (int) '9'; d++)
		{
			putchar(c);
			putchar(d);
			if (c == (int)'8' && d == (int)'9')
				continue;
			putchar((int)',');
			putchar((int)' ');

		}
	}
	putchar(10);

	return (0);
}
