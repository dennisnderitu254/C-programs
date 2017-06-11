
// printing a string


#include <stdio.h>

int main()
{
	char array[100];

	printf("Enter a string\n");
	scanf("%s",array);
	// %s is used to retrieve a string from a user

	printf("You entered the string %s\n",array);
	return 0;
}