// Print pattern

#include <stdio.h>

int main()
{
	int row,c,n,temp;

	printf("Enter the number of rows in pyramid of stars you wish to see:\n");
	scanf("%d",&n);

	temp = n;

	for(row=1;row<=n;row++)
	{
		for(c=1;c<temp;c++)
		
			printf("");
			// Leaving some space before printing
		    temp--;

		for(c=1;c<=2*row-1;c++)
			printf("*");
		//Print stars by calculating rows

		printf("\n");

		//Moving to new line after printing one
	}

	return 0;
}