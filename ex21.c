// Write a program to know a vowel

#include <stdio.h>

int main()
{
	char ch;

	printf("Input the character\n");
	scanf("%c",&ch);

	switch(ch)
	{
		case'a':
		case'A':
		case'e':
		case'E':
		case'i':
		case'I':
		case'o':
		case'O':
		case'u':
		case'U':
		printf("%c is a vowel.\n",ch);
		break;
		// if ch matches any case then it prints & breaks the execution
		default:
		printf("%c is not a vowel.\n",ch);
		// if the ch is not from the cases then it prints is not a vowel
	}

	return 0;
}
