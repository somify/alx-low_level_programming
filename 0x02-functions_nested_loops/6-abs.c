#include "main.h"

/**
 * _abs - gives the absolute value of an integer
 * @x: is the integer to be checked
 * Return: the absolute value of x
 */
int _abs(int x)
{
	if (x >  0)
	{
		return (x);
	} else if (x == 0)
	{
		return (0);
	}
	return (-x);
}
