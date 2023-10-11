#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - check main
 * @n: an integer input
 * Description: This function prints numbers to 98
 * Return: nothing
 */

void print_to_98(int n)
{
	int i;

    if (n <= 98) {
        for (i = n; i < 98; i++) {
            printf("%d, ", i);
        }
    } else {
        for (i = n; i > 98; i--) {
            printf("%d, ", i);
        }
    }
    printf("98\n");
}

int main() {
    int n = 10;
    print_to_98(n);
    return 0;
}
