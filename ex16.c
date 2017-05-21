// Area of a rectangle

#include <stdio.h>
#include <math.h>

int main()
{
	int length,breadth,area;

	printf("\nEnter the length of the rectangle:\n");
	scanf("%d",&length);

	printf("\nEnter the breadth of the rectangle:\n");
	scanf("%d",&breadth);

	area = length*breadth;
	printf("\nArea of Rectangle:%d",area);

	return 0;
}