#include "main.h"

/**
 * print_alphabet_x10 - No entry point
 *
 * Description - Prints the alphabets in lower case 10x
 *
 */

void print_alphabet_x10(void)
{
int count = 0;
	while (count < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		count++;
		_putchar('\n');
	}
}
