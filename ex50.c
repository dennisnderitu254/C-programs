// Write a program that checks the minimum element in an array

#include <stdio.h>

int main()
{
	int array[100],minimum,size,c,location=1;

	printf("Enter the number of elements in an array\n");
	scanf("%d",&size);

	printf("Enter %d integers\n",size);

	for(c=0;c<size;c++)
		scanf("%d",&array[c]);

	minimum=array[0];
	/* assuming first no. as minimum*/

	for(c=1;c<size;c++)
	{
		if(array[c]<minimum)
		{
			minimum=array[c];
			location=c+1;
			/*If any no. lesser than maximum found then
			set it as minimum and save its location*/

		}
	}

	printf("Minimum element is present at location %d and it's value is %d .\n",location,minimum);

	return 0;
}
