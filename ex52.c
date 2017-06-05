// Insert Elements in an Array

// Has an issue
// Needs some Debugging

#include <stdio.h>

int main()
{
	int array[100],position,c,n,value;

	printf("Enter number of Elements in an array\n");
	scanf("%d",&n);

	printf("Enter %d elements\n",n);


	for(c=0;c<n;c++)
	scanf("%d",&array[c]);

	printf("Enter the location where you wish to insert the element\n");
	scanf("%d",&value);


	for(c=n-1;c>=position-1;c--)
	array[c+1]=array[c];

	/*from given position shifting all elements by one position*/

	array[position-1]=value;
	// inserting value to a given position

	printf("Resultant array is \n");
	for(c=0;c ; printf("%d\n",array[c]));
	return 0;

}

