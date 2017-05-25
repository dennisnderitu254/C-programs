// Decimal to Octal

#include <stdio.h>

void main()
{
	long num,decimal_num,remainder,base=1,octal=0;

	printf("Enter a decimal integer\n");
	scanf("%ld",&num);
	decimal_num=num;

	while(num>0)
	{
		remainder=num%8;
		octal= octal + remainder*base;
		num=num/8;
		base=base*10;
	}

	printf("Input number is = %ld\n",decimal_num);

	printf("Its octal equivalent is = %ld\n",octal);
}
