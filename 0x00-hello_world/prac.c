#include <stdio.h>
#include <stdlib.h>

/* stufff
 *
 * */

int main(void)
{
char c = getchar();
int chara = 0;
int fullstp = 0;
int commaa = 0;

while (c != EOF);
{
if ( c == 'a')
	chara = chara + 1;
if (c == '.')
	fullstp = fullstp + 1;
if (c == ',')
	commaa = commaa + 1;
}
printf("We had a total amount of %d letters a , %d amount of fullstop, and a %d amount of comma's",chara, fullstp, commaa);
}
