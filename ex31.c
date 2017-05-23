// Generate armstrong number

#include <stdio.h>

int main()
{
	int r;
	long number = 0,c,sum = 0,temp;

	printf("Enter an integer up to which you want to find armstrong numbers\n");
	scanf("%d",&number);

	printf("Following armstrong numbers are found from 1 to %ld\n",number);

/*
if sum of cubes of each digit in a number is same as 
the number then it is called an armstrong number
*/

	for(c=1;c<=number;c++)
	{
		temp = c;
		while(temp!=0)
		{
			r=temp%10;
			sum=sum+r*r*r;
			temp=temp/10;
			// taking unit place digits cube and adding to sum
		}

		if(c==sum)
			printf("%ld\n",c);
		// if no Armstrong no then print
		sum=0;
	}

	return 0;
}