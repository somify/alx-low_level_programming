#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: is the number whose sign is printed
 * Return: 1 and prints + if n is postive
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}else if (n == 0)
	{
		_putchar('0');
		return (0);
	}else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
