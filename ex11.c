// Nested If Else

#include <stdio.h>
void main()
{
	int marks;
	printf("Enter your marks: ");
	scanf("%d",&marks);

	if(marks>100)
		// marks greater than 100
		printf("Not valid marks!");

	else if(marks>=80)
		// marks between 80 & 99
		printf("Your grade is A");

	else if(marks>=70)
		// marks between 50 & 69
		printf("Your grade is B");

	else if(marks>=50)
		printf("Your grade is C");

	else if(marks>=35)
		// marks between 35 & 49
		printf("Your grade id D");
	
	else
		// marks less than 35
		printf("Your grade is E");
}