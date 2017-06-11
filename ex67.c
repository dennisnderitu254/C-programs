// This is a C program that compares strings

#include <stdio.h>
#include <string.h>

int main()
{
	char a[100],b[100];

	printf("Enter the first string\n");
	gets(a);

	printf("Enter the second string\n");
	gets(b);

	/* strcmp(string,string):returns 0 if strings are equal else strings are unequal */

	if(strcmp(a,b)==0)
		printf("Entered strings are equal.\n");
	else
		printf("Entered strings are not equal.\n");

	return 0;
}