#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings with a given
 * number of bytes
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to copy into s1
 * Return: Null if error or char pointer to the new joined
 * place in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	char *x;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}

	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}

	if (j > n)
		j = n;
	x = malloc(sizeof(char) * (i + j + 1));

	if (x == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		x[k] = s1[k];

	for (k = 0; k < j; k++)
		x[k + i] = s2[k];

	x[i + j] = '\0';

	return (x);
}
