// Using a function

/* Write a program that asks a user for the radius of a circle,
the program then computes the diameter,
circumference and the area;and displays the results */

#include <stdio.h>
#define pie 3.14

float calcdiameter(float r)
{
	return(r*2);
}

float calcarea(float r)
{
	return(pie*r*r);
}

float calcircum(float r)
{
	return(pie*2*r);

}

int main()
{
	float radius;
	int answer
// using a do while loop
	do{

	printf("Enter radius\n");
	scanf("%f",&radius);

	printf("The Diameter:%.2f\n",calcdiameter(radius));
	printf("The Circumference:%.2f\n",calcircum(radius));
	printf("Area: %.2f\n",calcarea(radius));
	printf("To continue press 1");

	scanf("%d", &answer);

    }while(answer==1);


	return 0;


}


