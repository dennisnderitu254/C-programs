/*
 Write a program that uses an array to store the square of numbers, and displays the content of the array.
*/

#include <stdio.h>

int main()
{
	int square[20];
	int x,num=1;

	// store the  square of numbers between 1 & 20

	for(x=0;x<20;x++)
	{
		square[x]=num*num;
		num++;

	}

	for(x=0;x<20;x++)
	{
		printf("%d",square[x]);
		printf("\n");
	}

	return 0;
}
