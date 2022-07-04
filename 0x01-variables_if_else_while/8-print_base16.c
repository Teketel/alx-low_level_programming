#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char c, d;

	d = '9';
	for (c = '0'; c <= d; ++c)
	{
		putchar(c);
		if (c == '9')
		{
			c = 'a' - 1;
			d = 'f';
		}
	}
	putchar(10);

	return (0);
}
