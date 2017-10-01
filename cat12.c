/*
Write a program that repeatedly asks a user for a set of three integer numbers
 and outputs the largest integer numbers and outputs
the largest and the smallest of the three.
the prigram can exit when the user wishes to

*/

#include <stdio.h>

int main()
{
	int num1,num2,num3,max,min;

	printf("\nEnter 3 numbers:\n");
	scanf("%d%d%d",&num1,&num2,&num3);


    if(min=num1,max=num3)
    {

    if(num1>min){
	 min=num1;
    }

	if(num2>max){
	 max=num2;
	}

	if(num3<max){
	 max=num3;
	}


    }


	printf("\nThe highest number is %d",max);
	printf("\nThe lowest number is %d",min);


	return 0;




}
