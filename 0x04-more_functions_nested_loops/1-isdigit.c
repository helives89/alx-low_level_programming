#include "main.h"
/**
 *_isdigit - checks if input is digit
 *@c: integer input
 *
 *Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
