#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int n, x, y, next, next1, next2, x1, x2, y1, y2;

	 x = 1;
	 y = 2;

	for (n = 1; n < 92; n++)
	{
		printf("%lu, ", x);
		next = x + y;
		x = y;
		y = next;
	}
	x1 = x / 10000000000;
	x2 = x % 10000000000;
	y1 = y / 10000000000;
	y2 = y % 10000000000;
	for (n = 92; n <= 98; ++n)
	{
		printf("%lu", x1);
		printf("%lu", x2);
		if (n != 98)
		{
			printf(", ");
		}
		next1 = x1 + y1;
		next2 = x2 + y2;
		x1 = y1;
		x2 = y2;
		y1 = next1 + (next2 / 10000000000);
		y2 = next2 % 10000000000;
	}
	printf("\n");
	return (0);
}
