#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int n, x, y, next, x1, x2, y1, y2;

	 x = 1;
	 y = 2;

	for (n = 1; n <= 98; n++)
	{
		if (n < 92)
		{
			printf("%lu, ", x);
			next = x + y;
			x = y;
			y = next;
		}
		x1 = x / 1000000000;
		x2 = x % 1000000000;
		y1 = y / 1000000000;
		y2 = y % 1000000000;
		if (n >= 92)
		{
			printf("%lu", x1 + (x2 % 1000000000));
			printf("%lu, ", x2 % 1000000000);
			x1 = x1 + y1;
			y1 = x1 - y1;
			x2 = x2 + y2;
			y2 = x2 - y2;
		}
	}
	printf("\n");
	return (0);
}
