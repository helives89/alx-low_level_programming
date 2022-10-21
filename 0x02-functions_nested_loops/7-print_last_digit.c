#include "main.h"
/**
 *print_last_digit - Check for last digit
 *@n: an integer input
 *
 *Return: last digit of number n
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
