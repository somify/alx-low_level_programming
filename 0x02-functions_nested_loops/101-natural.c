#include <studio.h>

/**
 * main -  computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded)
 * followed by a new line.
 * Return: always 0 (Success)
 */
int main(void)
{
	int n;
	unsigned long int sum_x3, sum_x5, sum;

	sum_x3 = 0;
	sum_x5 = 0;
	sum = 0;

	n = 0;
	while (n < 1024)
	{
		if ((n % 3) == 0)
		{
			sum_x3 = sum_x3 + n;
		} else if ((n % 5) == 0)
		{
			sum_x5 = sum_x5 + n;
		}
	}
	sum = sum_x3 + sum_x5;
	printf("%lu\n", sum);
}
