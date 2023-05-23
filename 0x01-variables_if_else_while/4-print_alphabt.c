#include <stdio.h>
#include <stdlib.h>

/**
 *
 * ygui
 * hbj
 */

int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' || c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
