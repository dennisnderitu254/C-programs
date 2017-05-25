// Write a program value for looking for the Maximum Element in an Array

#include <stdio.h>

int main()
{
	int array[100],maximum,size,c,location=1;

	printf("Enter the number of Elements in an array\n");
	scanf("%d",&size);

	printf("Enter %d integers\n",size);

	for(c=0;c<size;c++)
		scanf("%d",&array[c]);

	maximum=array[0];
	/* assuming first no. as minimum*/

	for(c=1;c<size;c++)
	{
		if (array[c]>maximum)
		{
			maximum=array[c];
			location=c+1;
			/*If any no.greater than maximum found then 
			set it as maximum and save its location */
		}
	}

	printf("Maximum element is present at location %d and it's value %d.\n",location,maximum);

	return 0;
}