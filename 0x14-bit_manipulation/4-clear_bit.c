#include "main.h"

/**
 * clear_bit - it sets the value of a bit to 0 at a given index
 * @n: is the number to set its index value to 0
 * @index: is the index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int numOfBits = sizeof(unsigned long int) * 8;

	if (index >= numOfBits)
		return (-1);

	*n &= (~(1 << index));

	return (1);
}
