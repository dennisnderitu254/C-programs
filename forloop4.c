// Print tables from 2 to 10 by using nested for loop

#include <stdio.h>

int main()
{
	int num,i;

	for (num=2;num<=10;num++)
	{
		printf("\nTable of %d\n",num);

		for(i=1;i<=10;i++)
		{
			printf("\n %d * %d = %d",num,i,num*i);

		}
		printf("\n");

	}

	return 0;
}
