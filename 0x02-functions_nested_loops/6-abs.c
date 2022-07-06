#include "main.h"
/**
 * _abs - return the absolute value of `n`
 * @n: The number to check
 * Return: absolute value of `n`
 */
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	return (n);
}
