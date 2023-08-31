#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: parameter
 * @index: parameter
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int l;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	l = 1;
	l = l << index;
	*n = ((*n) | l);

	return (1);
}
