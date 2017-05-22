// Reverse number using array


#include <stdio.h>

void main()
{
	int n,array[100],i,a;
	printf("Enter no of digits in your number:");
	scanf("%d",&n);

	printf("Enter no.");
	for(i=0;i<n;i++)
	    scanf("%d",&a);
	// this stores each number in an array

	printf("Reverse no is:");
	for(i=n-1;i>=0;i--)
		printf("%d",a);
	// Printing array in reverse order

}
