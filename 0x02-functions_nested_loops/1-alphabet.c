#include "_putchar.h"
/**
 * print_alphabet - print_alphabet block
 * Write a function that prints the alphabet, in lowercase, followed by a new line. 
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);	
	}
	_putchar(10);

}
