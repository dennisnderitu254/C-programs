// Print day of the week using switch statement

#include <stdio.h>

int main()
{
	int num;

	printf("\nEnter the number between 1-7\n");
	scanf("%d",&num);

	switch(num)
	{
		case 1:printf("\nSunday");
		     break;
		case 2:printf("\nMonday");
		     break;
		case 3:printf("\nTuesday");
		     break;
		case 4:printf("\nWednesday");
		     break;
		case 5:printf("\nThursay");
		     break;
		case 6:printf("\nFriday");
		     break;
		case 7:printf("\nSaturday");
		     break;
	}

	return 0;
}