// Fibonacci series using recursion

/*
a series of numbers in which each number ( Fibonacci number ) is the sum of the two preceding numbers.
The simplest is the series 1, 1, 2, 3, 5, 8, etc.
*/

#include <stdio.h>

int Fibonacci(int);

main()
{
	int n,i=0,c;

	printf("Enter the number of terms: \n");
	scanf("%d",&n);

	printf("First %d terms of Fibonacci series are :-\n",n);

	for(c=1;c<=n;c++)
	{
		printf("%d\n",Fibonacci(i));
		i++;
	}

	return 0;

}

int Fibonacci(int n)
{
	if(n==0)
		return 0;
	else if (n==1)
	{
		return 1;
		/* code */
	}
	else
		return(Fibonacci(n-1)+Fibonacci(n-2));

	/*addind Fibonacci of (n-1) & (n-2) by recursive calling it*/
}
