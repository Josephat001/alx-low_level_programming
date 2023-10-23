#include <stdio.h>
#include "main.h"

/**
 * _strspn - check 3-main.c
 * Description: this function gets the length of a prefix substring.
 * @s: the initial segement/substring in which 'accept' is to be gotten from
 * @accept: the character yo be gotten from 's'
 *
 * Return: bytes from 'accept'.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	size_t length = 0;

        while (s[length] != '\0') {
        int found = 0;
        for (i = 0; accept[i] != '\0'; i++) {
            if (s[length] == accept[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            break;
        }
        length++;
    }
    return length;
}	
