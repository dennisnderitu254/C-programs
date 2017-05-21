// Area of Circle

#include <stdio.h>
#include <math.h>
#define pi 3.142

void main()
{
	float radius,area;

	printf("Enter the radius of a circle:\n");
	scanf("%f",&radius);

	area = pi*pow(radius,2);

	printf("Area of a circle = %5.2f\n",area);
}