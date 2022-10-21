#include <stdio.h>
#include "main.h"

/**
 * print_square - print a square
 *
 * @size: name of parameter
 *
 * Return: return 0
 *
 */

void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < (size - 1); b++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
