#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int c, d, e;

	for (c = (int) '0'; c <= (int) '9'; c++)
	{
		for (d = c + 1; d <= (int) '9'; d++)
		{
			for (e = d + 1; e <= (int) '9'; e++)
			{
				putchar(c);
				putchar(d);
				putchar(e);
				if (c == (int)'7' && d == (int)'8' && e == (int)'9')
					continue;
				putchar((int)',');
				putchar((int)' ');
			}
		}
	}
	putchar(10);

	return (0);
}
