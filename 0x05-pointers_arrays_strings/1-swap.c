/**
 * swap_int - swaps the values of two integers
 * using two input parameter
 * @a: input parameter 1
 * @b: input parameter 2
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int a;

	a = *a;
	*a = *b;
	*b = a;
}
