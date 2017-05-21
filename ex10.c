// Swapping two numbers

#include <stdio.h>

int main()
{
	int x,y,temp;

	printf("Enter the value of x and y\n");
	scanf("%d%d",&x,&y);

	printf("Before swapping\nx=%d\ny=%d\n",x,y);

	temp = x;
	x = y;
	y = temp;

	// Using temp to swap storing x to temp and y to x then moving temp to y

	printf("After Swapping\nx=%d\ny=%d\n",x,y);

	return 0;

}