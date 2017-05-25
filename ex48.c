// Write a program that converts Binary to hexadecimal

#include <stdio.h>

int main()
{
	long int binaryval,hexadecimalval=0,i=1,remainder;

	printf("Enter the binary number:");
	scanf("%ld",&binaryval);

	while(binaryval != 0)
	{
		remainder=binaryval%10;
		hexadecimalval=hexadecimalval+remainder*i;

		i=i*2;

		binaryval=binaryval/10;
	}

	printf("Equivalent hexadecimal value:%lX",hexadecimalval);
	// try using %x is a lowercase for hexadecimal
	return 0;
}
