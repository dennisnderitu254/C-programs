// Volume of cube

#include <stdio.h>

void main()
{
	float a;
	float surface_area,volume;

	printf("\nEnter size of any side of the cube:\n");
	scanf("%f",&a);

	surface_area=6*(a*a);
	volume=a*a*a;

	printf("Surface area of cube is: %.3f",surface_area);
	printf("\nVolume of cube is: %.3f",volume);

}

