#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 1 for little endian || 0 for big endian
 */

int get_endianness(void)
{
	char *y;
	int x = 1;

	y = (char *)&x;

	return (*y);
}
