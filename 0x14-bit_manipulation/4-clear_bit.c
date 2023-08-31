#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of
 * a bit to 0 at a given index.
 * @n: pointer to bit number to set
 * @index: index at which to set bit value
 *
 * Return: -1 if an error Else 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int max_1 = 1;

	i = (sizeof(unsigned long int) * 8);
	if (index > i)
		return (-1);

	max_1 = ~(max_1 << index);
	*n = (*n & max_1);

	return (1);
}
