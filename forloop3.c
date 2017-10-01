// Print pattern using nested for loop

/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

#include <stdio.h>

int main()
{
	int x,m;

	for(x=1;x<=10;x++)
	{
		for(m=1;m<=x;m++)
		{
			printf("*",m);
		}

		printf("\n");
	}

	return 0;

}
