#include <stdio.h>
#include "main.h"

/**
 * print_array - prints `n` elements of an array `a` integer.
 * @a: int pointer type.
 * @n: int type.
 * Description: where n is the number of elements of the array to be printed
 * Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the same
 * order as they are stored in the array
 * You are allowed to use printf
 * Return: void
 **/

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
