#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string
 * @s: string to search from
 * @accept: string to search
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; s[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
