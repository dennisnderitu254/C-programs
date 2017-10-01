// Let’s consider a problem. In a company, there are deductions from the salary of the
// employees for a fund. The deductions rules are as follows:
// i) If salary is less than 10,000 then no deduction
// ii) If salary is more than 10,000 and less than 20,000 then deduct Rs. 1,000 as
// fund
// iii) If salary is equal to or more than 20,000 then deduct 7 % of the salary for fund
// appropriate deduction show the net payable amount.

#include <stdio.h>
#include <math.h>


int main(){

	int S=0,x,s;
	printf("Enter your basic salary:\n");
	scanf("%d", &S);

	switch(S/1000)
	{
		case 0:
		printf("Net Patable is:\n%d",S);
	    break;

	    case 1:
	        x=S-1000;
	        printf("Net payable is:\n%d", x);
	    break;
	    default:
	        x=S*7.000/100;
	        s=S-x;
	    printf("Net payable is:\n%d",s);



	}
	return 0;

}


// Using switch

switch(salary < 10000)
   {
   	case1:
   	netsalary = salary;
   	break;

   	case 0:
   	switch ( salary < 20000)
   	{
   		case1:
   		netsalary = salary - 1000;
   		break;
   		case 0:
   		netsalary = salary - (salary*0.07);
   		break;
   	}
   	break;
   }
