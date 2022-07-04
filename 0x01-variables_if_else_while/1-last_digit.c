#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int n;
	int lastDigit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	printf("Last digit of %d is %d and ", n, lastDigit);
	if (lastDigit == 0)
		printf("is zero\n");
	else if (lastDigit < 6)
		printf("is less than 6 and not 0\n");
	else if (lastDigit > 5)
		printf("is greater than 5\n");
	return (0);
}
