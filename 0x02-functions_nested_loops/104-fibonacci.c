#include <stdio.h>

/*
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int n, x, y, next;

	 x = 1;
	 y = 2;

	for (n = 1; n <= 98; n++)
	{
		if (n < 98)
		{
			printf("%ld, ", x);
			next = x + y;
			x = y;
			y = next;
		} else
		{
			printf("%ld\n", next);
		}
	}
	return (0);
}
