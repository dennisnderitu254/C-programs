// This is a program that Deletes Vowels in a string

#include <stdio.h>
#include <string.h>

int check_vowel(char);

int main()
{
	char s[100],t[100];
	int i,j = 0;

	printf("Enter a string to delete vowels: \n");
	scanf("%s",s);

	/* In the program we create a new string and process entered string
	character by character,and if a vowel is found it is not added to new
	string otherwise the character is added to new string,after the string
	ends we copy the new string into original string */

	for(i=0;s[i]!='\0';i++){
		if(check_vowel(s[i])==0){
			// Not a vowel
			t[j]=s[i];
			j++;
		}
	}

	t[j]='\0';

	strcpy(s,t);
	// We are changing initial string
	printf("String after deleting vowels:%s\n",s);

	return 0;

}

int check_vowel(char c)
{
	switch(c){
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
		return 1;
		default:
		return 0;
	}
}


