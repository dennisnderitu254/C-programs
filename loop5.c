// program to print the table of any number using while loop

#include <stdio.h>

int main()
{
	int x=1,n,r;

	printf("\nEnter any number:\n");
	scanf("%d",&n);

	while(x<10)
	{
		x+=1;
		r=n*x;
		printf("%d\n",r);
	}

	return 0;
}

