
// Area of a triangle

#include <stdio.h>
#include <math.h>

void main()
{
	int height,base;
	float ans;//ans may come in fractions

	printf("Enter height and base\n");
	scanf("%d%d",&height,&base);

	ans = (0.5)*height*base;
	// This is the normal mathematical formula

	printf("Area if the triangle is %f\n",ans);

	return 0;
}
