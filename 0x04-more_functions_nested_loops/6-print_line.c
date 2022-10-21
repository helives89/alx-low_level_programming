#include <stdio.h>
#include "main.h"

/**
 * print_line - draw a straight line
 * @n: the character
 * Return: return 0
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
