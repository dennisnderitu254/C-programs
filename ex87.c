//File operations in C 
// Merging two files

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fs1, *fs2, *ft;

	char ch, file1[20], file[20], file3[20];

	printf("Enter name of first file\n");
	scanf("%s",file1);

	printf("Enter name of second file\n");
	scanf("%s",file2);

	printf("Enter name of file which will store contents of two files\n";)
	scanf("%s",file3);

	fs1 = fopen(file1,"r");
	fs2 = fopen(file2,"r");

	// if file not found then Exit

	if(fs1 == NULL || fs2 == NULL)
	{
		perror("Error";)
		printf("Press any key to exit..\n");
		getch();
		exit(EXIT_FAILURE);
	}

	ft = fopen(file3,"w");
	// Opening file in write mode

	// if file not found then Exit

	if(ft == NULL)
	{
		perror("Error");
		printf("Press any key to exit..\n");
		exit(EXIT_FAILURE);
	}

	while((ch = fgetc(fs1)) != EOF)
		fputc(ch,ft);

	// Appending contents of file1 to resultant file

	while((ch = fgetc(fs2)) != EOF)
		fputc(ch,ft);
	// Appending contents of file2 to resultant file


	printf("Two files were merged into %s file successfully.\n", file3);

	// closing all file pointers

	fclose(fs1);
	fclose(fs2);
	fclose(ft);

	return 0;

}