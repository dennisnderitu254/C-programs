// print the square of numbers 1 to 20 using the while loop

#include <stdio.h>

int main()
{
	int num=1,sqr;

	while(num<=20)
	{
		sqr=num*num;
		printf("\nNumber=%d and its square is %d",num,sqr);
		num+=1;

	}

	return 0;
}