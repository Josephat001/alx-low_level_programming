#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - geneates random password for 101-crackme
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i, j, k, s;
	char c[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char p[58];

	srand(time(NULL));
	while (s != 2772)
	{
		i = k = s = 0;
		while ((2772 - 122) > s)
		{
			j = rand() % 62;
			p[i] = c[j];
			s += c[j];
			i++;
		}
		while (c[k])
		{
			if (c[k] == (2772 - s))
			{
				p[i] = c[k];
				s += c[k];
				i++;
				break;
			}
			k++;
		}
	}
	p[i] = '\0';
	printf("%s", p);
	return (0);
}
