// C program that adds Complex Numbers

#include <stdio.h>

struct complex
{
	int real,img;
};

// structure to store real and imaginary part of number

int main()
{
	struct complex a,b,c;

	printf("Enter a nad b where a + ib is the first complex number.\n");
	printf("a=");
	scanf("%d",&a.real);
	printf("b=");
	scanf("%d",&a.img);

	printf("Enter c and d where c + id is the second complex number.\n");
	printf("c=");
	scanf("%d",&b.real);
	printf("d=");

	c.real=a.real+b.real;
	c.img = a.img + b.img;
	// Adding real and imaginary parts

	if(c.img>=0)
		printf("Sum of two complex numbers = %d+%di\n",c.real,c.img);
	else
		printf("Sum of two complex numbers = %d-%di\n",c.real,c.img);

	return 0;
}