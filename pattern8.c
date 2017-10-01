/*

EEEEE
DDDDD
CCCCC
BBBBB
AAAAA

*/

#include <stdio.h>

int main()
{
	int i,j;

	for(i='E';i>='A';i--)
	{
		for(j='E';j>='A';j--)
		{
			printf("%c",i);
		}
		printf("\n");
	}
	return 0;
}


