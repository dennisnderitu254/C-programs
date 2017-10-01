// check if the number is positive or negative

// using nested if statement

#include <stdio.h>

int main()
{
	int num;

	printf("\nEnter the number\n");
	scanf("%d",&num);

	if(num>0)
		printf("\nThe number is positive");
	else
	if(num<0)
		printf("\nThe number is negative");
	else
	printf("\nThe number is zero");

    return 0;
}