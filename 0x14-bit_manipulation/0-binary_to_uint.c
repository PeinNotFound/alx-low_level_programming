#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - it converts a binary number to an unsigned int
 * @b: is a string of 0 and 1 chars
 * Return: it's the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, res = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		res += (b[strlen(b) - 1 - i] - '0') << i;
	}
	return (res);
}
