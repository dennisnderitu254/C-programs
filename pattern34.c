/*

create a pyramid if stars

*/

#include <stdio.h>

/*
Change the value of min_stars to set min. no of stars in pyramid
take odd no for odd no of stars in each row 1-3-5 etc
take even no for even no of stars in each row 2-4-6 etc
*/
int main ()
{
	int i,j;

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");

		}

		printf("\n");
	}

	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}





