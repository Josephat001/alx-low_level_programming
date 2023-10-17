#include <stdio.h>
#include "main.h"

/**
 * _strlen - check 2-main.c
 * Description: This function prints the length of the string 's'
 * @s: the string whose length is to be printed
 *
 * Return: Always 0 (Success).
 */

int _strlen(char *s)
 {
     int swap;

     int l = 0;
     while (s[l]) 
            l++;

     return (l);
  } 
