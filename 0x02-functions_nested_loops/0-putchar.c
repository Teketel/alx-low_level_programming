#include "_putchar.h"

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int s[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i;

	for (i = 0; i < 8; i++)
		_putchar(s[i]);
	_putchar(10);

	return (0);
}
