#include <stdio.h>

/**
*main - "prints a-z lowercase"
*Return:O(Passed)
**/

int main(void)
{
char al = 'a';

while (al <= 'z')
	{
	putchar(al);
	al++;
	}
putchar('\n');
return (0);
}

