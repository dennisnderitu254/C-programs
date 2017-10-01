// Program to print Number in words
// between 1-5

#include <stdio.h>

int main()
{
	int num;

	printf("\nEnter the number\n");
	scanf("%d",&num);

	switch(num)
	{
		case 1:printf("\nOne");
		     break;
		case 2:printf("\nTwo");
		     break;
		case 3:printf("\nThree");
		     break;
		case 4:printf("\nFour");
		    break;
		case 5:printf("\nFive");
		    break;
		default:printf("\nInvalid Number");
	}

	printf("\n\nOut to switch");

	return 0;
}