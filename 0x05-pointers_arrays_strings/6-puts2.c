#include "main.h"

/**
 * puts2 - prints part of a string
 * @str: string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
