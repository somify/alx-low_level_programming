#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @num: is the number whose last digit is printed
 * Return: value of the last digit
 */
int print_last_digit(int num)
{
	int n;

	if (num < 0)
	{
		num = -num;
	}
	
	n = num % 10;

	if (n < 0)
	{
		n = -n;
	}

	_putchar(n + '0');

	return (n);
}
