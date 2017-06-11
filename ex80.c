// Additions Using Pointers

#include <stdio.h>

int main()
{
	int first,second,*p,*q,sum;

	printf("Enter two integers to add\n");
	scanf("%d%d",&first,&second);

	p = &first;
	// Storing address of first in p
	q = &second;
	// Storing address of second in q

	sum = *p + *q;

	// Adding contents of address stored in p & q

	printf("Sum of entered numbers = %d\n",sum);

	return 0;
}