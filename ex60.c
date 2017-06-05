// This is a program that performs a Binary search

#include <stdio.h>

int main()
{
	int c,first,last,middle,n,search,array[100];

	printf("Enter number of elements\n");
	scanf("%d",&n);

	printf("Enter %d integers \n",n);

	for(c=0;c<n;c++)
	scanf("%d",&array[c]);

    printf("Enter value to find\n");
    scanf("%d",&search);

    /* Calculating first,last and middle position */

    first=0;
    last=n-1;
    middle=(first+last)/2;

    /*
    
    Binary search will search an Element at middle,if Element at middle,if element is not found in
    middle then it will split the array into two parts and if element to be searched is less than middle
    then it will search only in lower part and if greater then in upper part

    */

    while(first<=last)
    {
    	if(array[middle]==search)
    	{
    		printf("%d found at location %d.\n",search,middle+1);
    		break;
    	}

    	else if(array[middle]<search)
    		first=middle+1;
    	else
    		last=middle-1;

    	middle=(first+last)/2;
    }

    if(first>last)
    	printf("Not found! %d is not present in the list.\n",search);

    return 0;
}
