// File operations in C
// Delete a File

#include &ltstdio.h>

main()
{
	int status;
	char file_name[25];

	printf("Enter the name of file you wish to delete\n");
	scanf("%s",filename);
	// gets(file_name);

	status = remove(file_name);
	//Remove() will delete specified file and returns 0 if file deleted

	if(status == 0)
		printf("%s file deleted successfully.\n" ,file_name);
	else
	{
		printf("Unable to delete the file\n");
		perror("Error");
	}

	return 0;
}