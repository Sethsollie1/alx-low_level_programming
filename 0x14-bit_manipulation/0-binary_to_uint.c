#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts binary number
 * to unsigned int
 * @b: string
 * Return: Converted number || 0
 */
unsigned int binary_to_uint(const char *b)
{
	int slen = 0, k;
	unsigned int total = 0;

	if (b == NULL)
		return (0);

	while (b[slen] != '\0')
	{
		slen++;
	}
	slen -= 1;
	k = 0;

	while (b[k])
	{
		if ((b[k] != '0') && (b[k] != '1'))
		{
			return (total);
		}
		if (b[k] == '1')
		{
			total += (1 * (1 << slen));
		}
		k++;
		slen--;
	}
	return (total);
}

