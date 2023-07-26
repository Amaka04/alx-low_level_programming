#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: pointer to an array
 * @n: no of element in an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
