#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the alphabets in lower case,except q & e
 *
 * Return: O, if succesful
 */
int main(void)
{
	char lc;

	for (lc = 'a' ; lc <= 'z' ; lc++)
	{
		if (lc != 'e' && lc != 'q')
			putchar(lc);
	}
	putchar('\n');
	return (0);
}
