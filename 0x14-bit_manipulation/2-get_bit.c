#include <stdio.h>
#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The bits
 * @index: index to check bit and get value
 *
 * Return: -1 if error, Else value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	unsigned int j;

	j = (sizeof(unsigned long int) * 8);
	if  (index > j)
		return (-1);

	i = ((n >> index) & 1);
	return (i);
}
