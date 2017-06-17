//File Operations in C
//Copy Files

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch,source_file[20],target_file[20];
	FILE *source, *target;


	printf("Enter name of file to copy\n");
	scanf("%s",source_file);
	// gets(source_file);

	source = fopen(source_file,"r");

	// if file not found then exit

	if(source == NULL)
	{
		printf("Press any key to exit...\n");
		exit(EXIT_FAILURE);
	}

	printf("Enter name of target file\n");
	scanf("%s",target_file);
	// gets(target_file);

	target = fopen(target_file,"w");

	// opening file in write mode
	// if file not found then exit

	if(target == NULL)
	{
		fclose(source);
		printf("Press any key to exit...\n");
		exit(EXIT_FAILURE);
	}

	while((ch = fgetc(source)) != EOF)
		fputc(ch,target);
	// append each character from file 1 to target file

	printf("File copied successfully.\n");

	// closing both files

	fclose(source);
	fclose(target);

	return 0;

}