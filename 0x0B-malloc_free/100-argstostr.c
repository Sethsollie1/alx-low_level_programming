#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 *             arguments sepreated by newline.
 * @ac: number of arguments
 * @av: double pointer(array pointer) to arguments
 *
 * Return: NULL if ac || av = 0 or error
 *         else pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int x, y;
	int z = 0;
	int n = 0;
	char *str;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			n++;
		n++;
	}

	n++;
	str = malloc(n * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			str[z] = av[x][y];
			z++;
		}
		str[z] = '\n';
		z++;
	}

	str[z] = '\0';
	return (str);
}
