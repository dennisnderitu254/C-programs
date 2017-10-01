/*

AAAAA
BBBBB
CCCCC
DDDDD
EEEEE

*/

#include <stdio.h>

int main()
{
	int i,j;

	for(i='A';i<='E';i++)
	{
		for(j='A';j<='E';j++)
		{
			printf("%c",i);
		}
		printf("\n");
	}
	return 0;
}
