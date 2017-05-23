// Temperature Conversion

#include <stdio.h>

void main()
{
	int from,to;
	float value;


	printf("Temperature Conversion\nEnter number of units to convert from:\n\t1.Celcius\n\t2.Farenheight\n\t3.Kelvin\n\t");
	scanf("%d",&from);

	printf("Enter the value to convert:");
	scanf("%f",&value);

	// Converting given value from specified unit of kelvin

	switch(from){
		case 1:
		value = value + 273.15;break;
		case 2:
		value = (value+495.67)*5/9;break;
		case 3:break;
		default:break;
	}

	// Converting value from Kelvin to specified unit
	
	printf("Temperature Conversion\nEnter number of units to convert to:\n\t1.Celcius\n\t2.Farenheight\n\t3.Kelvin\n\t");
	scanf("%d",&to);

	switch(to)
	{
		case 1:
		value=value-273.15;break;

		case 2:
		value=value*9/5-459.67;break;

		case 3:break;

		default:break;
	}

	printf("Converted value: %f",value);
}
