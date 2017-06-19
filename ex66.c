// This is a C program that is going to be used to determine String Length

#include <stdio.h>
#include <string.h>


int main()
{
	char a[100];
	int length;

	
	printf("Enter a string to calculate it's length\n");
	gets(a);

	length=strlen(a);
	/*strlen (string): function gives length of string */

	printf("Length of entered string is = %d\n",length);
	return 0;
}