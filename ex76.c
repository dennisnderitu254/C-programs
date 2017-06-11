// This is a program that removes spaces in a string

#include <stdio.h>

int main()
{
	char text[100],blank[100];
	int c=0,d=0;

	printf("Enter some text\n");
	scanf("%s",text);
	// gets(text);

	while(text[c] != '\0')
	{
		// If two consecutive spaces found then it will not be added to new string

		if(!(text[c] ==' ' && text[c+1]==' '))
		{
			blank[d]=text[c];
			d++;

		}

		c++;
	}

	blank[d]='\0';

	printf("Text after removing blanks \n%s\n",blank);

	return 0;
}


