/**
 * reverse_array - reverses the content of an array of integers
 * @n: the number of elements of the array
 * @*a: pointer to int array
 */
void reverse_array(int *a, int n)
{
	int t, s, e;

	s = 0;
	e = n-1;
	while (s < e)
	{
		t = a[s];
		a[s] = a[e];
		a[e] = t;
		s++;
		e--;
	}
}
