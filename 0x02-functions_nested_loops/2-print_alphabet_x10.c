#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char SC;
	int i;
	i=0

	while (i<10)
	{
		for (SC='a'; SC<='z')
		{
			_putchar(SC);
			SC++;
		}
		_putchar('\n');
		i++;
	}
}
