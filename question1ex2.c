// A shopkeeper announces a package for customers that he will give 10 % discount on
// all bills and if a bill amount is greater than 5000 then a discount of 15 %.
// Write a program which takes amount of the bill from user and calculates the payable
// amount by applying the above discount criteria and display it on the screen.

#include <stdio.h>
#include <math.h>

int main(){

	int bill=0,x,y; // declare a variable called bill


	printf("Enter the bill:\n");
	scanf("%d", &bill);

	if  (bill > 5000){

		y= bill*0.15;
		x= bill-y;
		printf("Bill is:\n%d",x);
	}
	return 0;



}

// using a do while loop

#include <stdio.h>
#include <math.h>

int main()
{
	int bill=0,x,y;
    
	do
	{
		printf("Press 1 to continue or 0 to exit");
		scanf("%d", &response);

		printf("Enter your bill:\n");
		scanf("%d", &bill);

		if  (bill > 5000){

		y= bill*0.15;
		x= bill-y;
		printf("Bill is:\n%d",x);

		

	}while(response == 1)
	return 0;
}
