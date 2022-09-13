#include "main.h"
/**
 * main - Program that prints _putchar, followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char c[] = "main.h";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
