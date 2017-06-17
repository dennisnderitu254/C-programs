// File operations in C
// List files in a directory

#include <stdio.h>

// check on libraries
#include <conio.h>
#include <dir.h>


int main()
{
	int done;
	struck ffblk a;

	printf("Press any key to view the files in the current directory\n");

	getch();

	done = findfirst("*.*",&a,0);

	while(!done)
	{
		printf("%s\n",a.ff_name);
		done = findnext(&a);
	}

	getch();
	return 0;
}
