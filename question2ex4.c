/*
write a function that takes three values and returns the largest of the three.

in main() read three values and invoke the function.Display the largest value.

*/

#include <stdio.h>

int largest(int x,int y,int z)
{
	int max;
	if((x>y) && (x>z))
		max = x;
	else if((y>x) && (y>z))
		max = y;
	else
		max = z;

	return max;
}

int main()
{
	int x,y,z,answer = 1;

	while(answer==1)
	{
		printf("Enter the values\n");
		scanf("%d%d%d",&x,&y,&z);
		printf("The largest of three: %d\n",largest(x,y,z));
		printf("To continue press 1\n");
		scanf("%d",&answer);

	}
   return 0;
}
