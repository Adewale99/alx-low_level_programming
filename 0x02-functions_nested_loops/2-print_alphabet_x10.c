#include "main.h"

/**
 * print_alphabet_x10 - Function that prints 10 times the alphabet in lowercase
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char i, p;

	for (i = 0; i <= 9; i++)
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}
		_putchar('\n');
	}
}
