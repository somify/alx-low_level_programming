#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n: the number of times '\' is used
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		while (i <= n)
		{
			_putchar('\');
			i++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
