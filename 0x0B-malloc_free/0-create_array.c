#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char
 * @size: an input for the size of the array in int
 * @c: to store the strings of char
 * Return: a pointer to the base char c
 */
char *create_array(unsigned int size, char c)
{
	size_t i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
