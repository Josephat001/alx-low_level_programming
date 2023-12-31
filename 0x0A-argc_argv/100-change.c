#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount of money
 * @argc: argument that takes the number of coins
 * @argv: amount of money
 * Return: 0 if negative amount, 1 if amount not given
 */

int main(int argc, char *argv[])
{
	int n, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}


	n = atoi(argv[1]);

	coins += n / 25;
	n = n % 25;
	coins += n / 10;
	n = n % 10;
	coins += n / 5;
	n = n % 5;
	coins += n / 2;
	n = n % 2;
	coins += n / 1;

	printf("%d\n", coins);

	return (0);
}
