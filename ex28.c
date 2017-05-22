// Write a program that checks for prime numbers

#include <stdio.h>

int check_prime(int);

main()
{
	int i,n,result;

	printf("Enter the number of prime numbers required : \n");
	scanf("%d",&n);
	printf("First %d prime numbers are:\n",n);

	for(i=0;i<n;i++)
	{
		result = check_prime(i);
		//If it is prime it will then return 1

		if(result==1)
			printf("%d\n",i);
	}

	return 0;
}

int check_prime(int a)
{
	int c;
	/*
	starting from 2,if no is completely divisible
	by any no then it is not prime
	*/

	for(c=2; c<=a-1; c++)
	{
		if(a%c == 0)
			return 0;
	}

	if(c==a)
		return 1;
}
