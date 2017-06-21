/* Perform addition,subtraction,multiplication
 division using switch statement */

#include <stdio.h>

int main()
{
	int num1,num2,choice;

	printf("\nEnter the two numbers\n");
	scanf("%d%d",&num1,&num2);

	printf("\n1 Addition");
	printf("\n2 Subtraction");
	printf("\n2 Multiplication");
	printf("\n4 Division");
	printf("5 modulus");

	printf("\nEnter the choice:");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:printf("\n The addition of two numbers is %d",num1+num2);
		    break;
		case 2:printf("\nThe subtraction of two numbers is %d",num1-num2);
		    break;
		case 3:printf("\nThe multiplication of two numbers is %d",num1*num2);
		    break;
		case 4:printf("\nThe Division od two numbers is %d",num1/num2);
		    break;
		case 5:printf("\nThe modulus of two numbers is %d",num1%num2);
		    break;
		default:printf("\nThis operation is not possible");
	}

	return 0;
}
