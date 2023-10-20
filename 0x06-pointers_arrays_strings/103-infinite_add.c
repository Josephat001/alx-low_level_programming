#include <stdio.h>
#include "main.h"

/**
 * infinite_add - check 103-main.c
 * Description: this function adds two numbers, using buffer and buffer size
 * @n1: the first number to be added
 * @n2: the second number to be added
 * Return: a pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
  int l1 = strlen(n1);
    int l2 = strlen(n2);
    int carry = 0;
    int max_l = l1 > l2 ? l1 : l2;
    
    if (max_l + 1 > size_r) {
        return 0;
    }

    r[max_l + 1] = '\0';

    while (l1 > 0 || l2 > 0) {
        int digit1 = (l1 > 0) ? n1[--l1] - '0' : 0;
        int digit2 = (l2 > 0) ? n2[--l2] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        r[max_l--] = (sum % 10) + '0';
    }

    if (carry) {
        if (max_l < 0) {
            return 0;
        }
        r[max_l] = carry + '0';
    }

    return &r[max_l];
}
