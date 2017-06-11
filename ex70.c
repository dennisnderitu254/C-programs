// This is a program that Reverses a String

// Has issues

#include <stdio.h>
#include <string.h>

int main()
{
	char arr[100];

	printf("Enter a string to reverse\n");
	gets(arr);

	strrev(arr);

	// strrev(string):reverses the given string

	printf("Reverse of entered string is \n%s\n",arr);

	return 0;
}
