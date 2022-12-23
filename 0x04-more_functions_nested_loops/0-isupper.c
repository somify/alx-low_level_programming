#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: is the character to be checked
 * Return: 1 if true, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
