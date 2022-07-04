#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar(10);

	return (0);
}
