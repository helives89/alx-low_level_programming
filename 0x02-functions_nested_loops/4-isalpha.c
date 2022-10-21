#include "main.h"
/**
 *_isalpha - check whether input is an alphabet or not
 *@c: integer input
 *Return: 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
