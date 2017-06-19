// Shutdown Computer

// For Windows & use only

#include <stdio.h>
#include <stdlib.h>

main()
{
	char ch;
	printf("Do you want to shut down your computer now(y/n)\n");
	scanf("%c",&ch);

	if(ch == 'y'|| ch == 'Y')
		system("C:\\WINDOWS\\System64\\shutdown /s");
	// Shutdown command

	return 0;
}