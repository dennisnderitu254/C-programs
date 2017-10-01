/* Write a program that asks a user for the radius of a circle,
the program then computes the diameter,
circumference and the area;and displays the results */

/*

pseudocode
1.start
2.Variables:radius,diameter,circumference,area
3.radius=0;diameter=0;area=0
4.read radius
5.diameter = 2 * radius
6.circumference = pie * diameter
7.area = Pie*radius*radius
8.write radius,diameter,circumference,area
9.stop

*/

#include <stdio.h>
#define Pie 3.14

int main()
{
	float radius = 0,diameter = 0;

	float circum = 0,area = 0;

	printf("Enter the radius of the circle:");

	scanf("%f", &radius);

	diameter = 2*radius;

	circum = Pie * diameter;

	area = Pie*radius*radius;
	
	printf("Radius\t Diameter\t Circumference\t Area\n");
	
	printf("%.2f\t \t%.2f\t\t%.2f\t\t%.2f\n", radius,diameter, circum, area);

	return 0;


}





