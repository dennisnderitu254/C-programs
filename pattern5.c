/*

ABCDE
ABCDE
ABCDE
ABCDE
ABCDE

*/

#include <stdio.h>

int main()
{
	int i,j;

	for(i='A';i<='E';i++)
	{
		for(j='A';j<='E';j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	return 0;
}