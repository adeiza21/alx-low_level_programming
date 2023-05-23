#include <stdio.h>
#include <stdlib.h>

/*ddfdffd dff
 *dfddf ffd
 *dfsfg
 * sdfdsg
 */
int main(void)
{

	char stuff[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0; stuff[i] != '\0'; i++)
	{
		putchar(stuff[i]);
	}
	return (0);
}
