#include <stdio.h>
#include "main.h"
/**
 * leet - this function encodes a string into 1337.
 * Letters a and A are replaced by 4.
 * Letters e and E are replaced by 3
 * Letters o and O are replaced by 0
 * Letters t and T are replaced by 7
 * Letters l and L are replaced by 1
 * @s: a string been pointed.
 *
 *Return: str
 */
char *leet(char *s)
{
	int strC, leetC;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	strC = 0;
	while (s[strC] != '\0')
	{
		leetC = 0;
		while (leetC < 10)
		{
			if (leetLetters[leetC] == s[strC])
			{
				s[strC] = leetNums[leetC];
			}
			leetC++;
		}
		strC++;
	}
	return (s);
}
