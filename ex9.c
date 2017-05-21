
// Greatest of three numbers

#include <stdio.h>

void main()
{
	int a,b,c;

	printf("Enter any three numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
		// if a is greater than b & c
		printf("The greatest number is:%d",a);
	else if(b>c)
		// if not a, then if b is greater than c
		printf("The greatest number is:%d",b);
	else
		// if a & b are not greater
		printf("The greatest number is:%d",c);

}
