#include <stdio.h>
#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int _islower(int c)
{	
	if (c >= 65 && c <= 90)
	{
		return (0);
	}
	
	else if (c >= 97 && c <= 123)
	{
		return (1);
	}

}

int main(void)
{
    int r;

    r = _islower('H');
    putchar(r + '0');
    r = _islower('o');
    putchar(r + '0');
    r = _islower(108);
    putchar(r + '0');
    putchar('\n');
    return (0);
}
