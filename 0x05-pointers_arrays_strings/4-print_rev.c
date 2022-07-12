#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: char pointer type
 *
 * Return: void
 **/

void print_rev(char *s)
{
	int sLength;
	int i;

	for (sLength = 0; s[sLength] != '\0'; sLength++)
		;
	for (i = sLength - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');

}
