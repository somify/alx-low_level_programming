#include "main.h"

/**
 * print_times_table - n times table starting with 0
 * @n: the number of the times table
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n <= 15)
	{
		x = 0;
		while (x <= n)
		{
			y = 0;
			while (y <= n)
			{
				z = x * y;
				if ( y == 0)
				{
					_putchar(z + '0');
				}
				if (z <= 9 && y != 0)
				{
					_putchar(',');									_putchar(' ');									_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				}
				if (z > 9 && z < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
				}
				if (z >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((z / 100) + '0');
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
				y++;
			}
			_putchar('\n');
			x++;
		}
	}
}
