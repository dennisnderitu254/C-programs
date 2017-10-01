// Program to print the table of any number using for loop

#include <stdio.h>

int main()
{
	int num,i;

	printf("\nEnter any number:\n");
	scanf("%d",&num);

	for(i=1;i<=10;i++)
	{
		printf("\n%d*%d=%d",num,i,num*i);
	}
	return 0;
}