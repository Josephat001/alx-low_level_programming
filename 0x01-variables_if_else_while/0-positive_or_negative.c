#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point 
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("n: is positive\n");
	else if (n == 0)
		printf("n: is zero\n");
	else
		printf("n: is negative\n");
	return (0);
}
