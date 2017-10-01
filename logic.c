// Check if the number is Even,Odd ar zero


#include <stdio.h>

int main()
{
	int num;
	printf("\nEnter the number\n");
	scanf("%d", &num);

	if(num==0)
		printf("\nThe number is zero");

	if(num%2==0)
		printf("\nThe number is even");

	if(num%2!=0)
		printf("\nThe number is odd");

	return 0;
}