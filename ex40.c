
// Diamond pattern

#include <stdio.h>

int main()
{
	int n,c,k,space=1;

	printf("Enter number of rows\n");
	scanf("%d",&n);

	space = n-1;

	// Here we will divide diamond in 2 parts : Upper and Lower

	// Print upper Part
	for(k=1;k<=n;k++)
	{
		for(c=1;c<=space;c++)
			printf("");
		//leaving space before printing
		space--;

		for(c=1;c<=2*k-1;c++)
			printf("*");
		//printing by calculating row no

		printf("\n");
		//moving to new line after printing one
	}

	space=1;

	//Printing lower part

	for(k=1;k<=n-1;k++)
	{
		for(c=1;c<=space;c++)
			printf(" ");

		space++;

		for(c=1;c<=2*(n-k)-1;c++)
			printf("*");

		printf("\n");
	}

	return 0;
}
