// This is a program that finds a palindrome

// has issues

#include <stdio.h>
#include <string.h>


int main()
{
	char a[100],b[100];

	printf("Enter the string to check if it is a palindrome\n");
	scanf("%s",a,b);

	strcpy(b,a);
	strrev(b);
	/*Reversing given string and comparing
	if reverse and given are same then palindrome*/

	if(strcmp(a,b)==0)
		printf("Entered string is a palindrome.\n");
	else
		printf("Entered string is not a palindrome.\n");

	return 0;
}
