#include "main.h"
/**
 * print_sign - a function that prints the sign of a number.
 * @n: The number to check
 * Return: 1 if `n` is positive, 0 if `n` is 0 and -1 otherwise.
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('-');
	return (-1);
}
