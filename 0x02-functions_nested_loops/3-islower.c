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
