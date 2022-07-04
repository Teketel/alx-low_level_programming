#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char c, d;

	d = 'z';
	for (c = 'a'; c <= d; ++c)
	{
		putchar(c);
		if (c == 'z')
		{
			c = 'A' - 1;
			d = 'Z';
		}
	}
	putchar(36);
	putchar(10);

	return (0);
}
