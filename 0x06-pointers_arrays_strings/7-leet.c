#include <stdio.h>

/**
 * leet - encode a string into 1337
 * @s: string
 * Description: 
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * Prototype: char *leet(char *);
 * You can only use one if in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation
 * 
 * Return: encoded string `s`
 */

char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		switch (s[i])
		{
			case 'a':
				s[i] = '4';
				break;
			case 'A':
				s[i] = '4';
				break;
			case 'e':
				s[i] = '3';
				break;
			case 'E':
				s[i] = '3';
				break;
			case 'o':
				s[i] = '0';
				break;
			case 'O':
				s[i] = '0';
				break;
			case 't':
				s[i] = '7';
				break;
			case 'T':
				s[i] = '7';
				break;
			case 'l':
				s[i] = '1';
				break;
			case 'L':
				s[i] = '1';
				break;
			default:
				break;
		}
	}

	return (s);
}
