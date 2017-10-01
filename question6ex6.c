/*6.	Write a program that will calculate and print bills for a city power company.
 The   rates vary depending on whether the electricity use is residential commercial, or industrial.
Code R means residential use, a code C means commercial use, and code I means industrial use. Any other code
should be treated as an error.
  	  The rates are computed as follows:

  	R:	Ksh. 500 plus Ksh. 4.8 per KWH. Used
    C: 	Ksh. 50,000 for the first 1000 KWH and Ksh. 3.75 for each additional KWH.
    I: 	rate varies depending on time of usage
      Peak hours: Ksh. 68,000 for first 1000 KWH and Ksh.  5.60 for each additional KWH.
     Off peak hours:  Ksh. 37,000 for first 1000KWH and  Ksh. 2.75 for each additional Ksh.

Your program should prompt the user to enter an integer account number, the user code (type char),
 and the necessary consumption figures in whole
numbers Kilowatts hours. Your program should display the amount due from the user.*/

#include <stdio.h>
#include <math.h>

// function to calculate two numbers

int Sum(int x,int y)
{

    int total = x + y;
    return total;

}

int main()
{
	int I=0,kw=0,x,y,z,w;
	char T;
	char U;
	printf("Enter Account Number\n");
	scanf("%d",&I);
	printf("Enter the user code (R,C,I)\n"); // User to input either R,C or I.
	scanf("%s",&U);
	printf("Enter the electricity consumption\n");
	scanf("%d",&kw);
	switch(U)
	{
		case 'C':
		case 'c':
		if(kw>1000)
		{
			x=50000;
			kw=kw-1000;
			y=3.75*kw;
			z=x+y;
			printf("Your Electricity bill is\n%d",Sum(x,y));

		}
		else
		{
			x=50000;
            printf("Your Electricity Bill is\n%d",x);

		}
		break;
		case 'I':
		case 'i':
		printf("Enter your time of consumption\n");
		scanf("%s",&T);
		switch(T)
		{
			case 'p':
			case 'P':
			if(kw>1000)
			{
				x=68000;
				kw=kw-1000;
				y=5.60*kw;
				z=x+y;
				printf("Your Electricity Bill is \n%d", Sum(x,y));
			}
			else
			{
				x=68000;
				printf("Your Electricity Bill is \n%d",x);
			}
			break;
			case 'op':
			case 'Op':
			case 'OP':
			if(kw>1000)
			{
				x=37000;
				w=kw-1000;
				y=2.75*w;
				z=x+y;
				printf("Your Electricity Bill is \n%d",z);
			}
			else
			{
				x=37000;
				printf("Your Electricity bill is\n%d",x);
			}
			break;
			default:
			    printf("Invalid time usage\n please use P for peak or for OP for Off-peak");
		}

		break;
		case 'R':
		case 'r':
		     x=500;
		     w=kw*4.8;
		     z=w+x;
		     printf("Your Electricity Bill is\n%d",z);
		break;
		default:
		    printf("Invalid User Code! \n Please use code R for residential use,\n code C for commercial use \n and code I for industrial use");



	}
return 0;

}

