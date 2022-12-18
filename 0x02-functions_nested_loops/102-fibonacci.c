#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int x, y, z, sum;

	y = 1;
	z = 2;

	for (x = 0; x <= 49; x++)
	{
		if (y < 20365011074)
		{
			printf("%ld, " y);
		} else
		{
			printf("%ld\n", y);
		}
		
		sum = y + z;
		y = z;
		z = sum;
	}
	return (0);
}
