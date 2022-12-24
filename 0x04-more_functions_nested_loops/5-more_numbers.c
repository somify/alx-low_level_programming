#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int i, n;

	i = 1;
	while (i <= 10)
	{
		for (n = 0; n < 15; n++)
		{
			if (n >= 10)
			{
				_putchar('1');
			}
			_putchar((n % 10) + '0');
		}
		i++;
	}
	_putchar('\n');
}
