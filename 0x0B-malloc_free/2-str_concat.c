#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to be joined to
 * @s2: string to join s1
 *
 * Return: pointer to newly allocated space in memory
 *         containing concatenated string , or NULL if error
 *         in concatenating
 */

char *str_concat(char *s1, char *s2)
{
	char *join;
	int copy = 0;
	int length = 0;
	int a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] || s2[a]; a++)
		length++;

	join = malloc(sizeof(char) * length);

	if (join == NULL)
		return (NULL);

	for (a = 0; s1[a]; a++)
		join[copy++] = s1[a];

	for (a = 0; s2[a]; a++)
		join[copy++] = s2[a];

	return (join);
}
