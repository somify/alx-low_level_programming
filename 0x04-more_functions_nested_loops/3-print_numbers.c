#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * followed by a new line
 */
void print_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	_putchar("%d", n);
	n++;
}
