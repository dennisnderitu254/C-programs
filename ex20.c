// Volume of Sphere

#include <stdio.h>
#include <math.h>


void main()
{
	float radius,pie,volume;
	pie=3.1416;

	printf("Enter the radius:\n");
	if(scanf("%f",&radius)==1)
	{
		volume=(4/3)*pie*pow(radius,3);
		printf("The volume is:%6.2f",volume);
	}
	else
	{
		printf("ERROR,ENTER A CORRECT VALUE");
	}
}
