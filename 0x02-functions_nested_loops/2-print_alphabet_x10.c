#include "stdio.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
        int s = 0;
        int i = 1;
        char c;
        while(i < 10)
        {
         s = 0;       
        while (s < 1)
        {
                for(c = 'a'; c <= 'z'; c++)
                {
                        putchar(c);
                }
                s++;
        }
        putchar('\n');
	i++;
	}
}

int main(void)
{
    print_alphabet_x10();
    return (0);
}
