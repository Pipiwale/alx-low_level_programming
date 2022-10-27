
Miguel22247
/
holbertonschool-low_level_programming
Public
Code
Issues
Pull requests
Discussions
Actions
Projects
Security
Insights
holbertonschool-low_level_programming/0x14-bit_manipulation/0-binary_to_uint.c
@Miguel22247
Miguel22247 0-binary_to_uint.c
 1 contributor
32 lines (26 sloc)  391 Bytes
#include "holberton.h"
/**
 * binary_to_uint - Entry Point
 * @b: const char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int base = 1, i = 0;

	if (b == NULL)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		res += ((b[i] - '0') * base);
		base *= 2;
		i--;
	}


	return (res);

}
