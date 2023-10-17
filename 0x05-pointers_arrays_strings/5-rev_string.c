#include <stdio.h>
#include "main.h"

/**
 * rev_string - check 5-main.c
 * Description: This function reverses a string; 's'.
 * @s: the string to be reversed.
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, temp;
	i= 0;
	j= 0;

	while (s[i] != '\0' ) 
	{
		j++;
	}
		j--;
	while (j>i) 
	{
		temp = s[j];
		s[j--] = s[i];
		s[i++] = temp;
	}  

	/*temp, char;
	int len = 0;
	char *stt = str;
	char *stp = str;

	char = temp;
	while (*stp != '\0')
	{
		len++;
		stp++;
	}
	stp--;

	while (stt < stp)
	{
		temp = *stt;
		*stt = *stp;
		*stp = temp;
		stt++;
		stp--;
	}*/
}
