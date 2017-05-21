// Reverse Number

#include <stdio.h>

int main()
{
	int n,reverse=0;

	printf("Enter a number to reverse:\n");
	scanf("%d",&n);

	while(n!=0)
	{
		reverse=reverse*10;
		reverse=reverse+n%10;
		n=n/10;
	}
	/*
	taking unit place digit of no and moving to reverse

	dividing the no to discard unit place digit


	*/
	printf("Reverse of entered number is = %d\n", reverse);
	return 0;

}