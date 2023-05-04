#include "main.h"
#include <stdio.h>

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the bit to set
 * @index: The index to set the value of bit
 *
 * Return: 1 if error, else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int max_1 = 1;

	i = (sizeof(unsigned long int) * 8);
	if (index > i)
		return (-1); /* error*/

	max_1 <<= index;
	*n = (*n | max_1);

	return (1);
}
