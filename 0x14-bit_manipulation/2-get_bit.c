#include "main.h"

/**
 * get_bit - it gets the value of a bit at a given index
 * @n: is the number to get the value from
 * @index: is the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int numOfBits = sizeof(unsigned long int) * 8;

	if (index >= numOfBits)
		return (-1);

	return ((n >> index) & 1);
}
