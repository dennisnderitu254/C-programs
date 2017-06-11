// This is a program that Concatenates strings

#include <stdio.h>
#include <string.h>

int main()
{
	char a[100],b[100];

	printf("Enter the first string\n");
	gets(a);

	printf("Enter the second string\n");
	gets(b);

	strcat(a,b);
	
	/* strcat will append string b on string a */

	printf("String obtained on concatenation is %s\n",a);

	return 0;

}