#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %zu bytes", sizeof(char));
	printf("Size of a char: %zu bytes", sizeof(int));
	printf("Size of a char: %zu bytes", sizeof(long int));
	printf("Size of a char: %zu bytes", sizeof(long long int));
	printf("Size of a char: %zu bytes", sizeof(float));
	return (0);
}
