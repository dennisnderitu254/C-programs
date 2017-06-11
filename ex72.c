// This is a program that changes case

// Lower Case

// has some issues

#include <stdio.h>
#include <string.h>

int lowercase()
{
	char string[]="Strlwr in C";

	printf("%s\n",strlwr(string));
	//strlwr() will print string in lower case

	return 0;
}

// Upper Case

#include <stdio.h>
#include <string.h>

int uppercase()
{
	char string[]="Strupr in C";

	printf("%s\n",strupr(string));

	//strupr will print string in upper case

	return 0;
}
