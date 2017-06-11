// This is a C program that computes the sum of an array using a pointer

#include <stdio.h>

void main()
{
	int numArray[10];
	int i,sum=0;
	int *ptr;

	printf("\nEnter 5 Elements: ");
	for(i=0;i<5;i++)
		scanf("%d",&numArray[i]);
	    ptr = numArray; /* a=&a[0] */

	for(i=0;i<5;i++)
	{
		sum = sum + *ptr;
		ptr++;
	}

	printf("The sum of array elements: %d",sum);
}