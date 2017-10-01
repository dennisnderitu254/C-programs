/* 
Write a program that takes the days as input
and outputs the months and days ( Hint months
= days/30, days = days%30).
*/


#include <stdio.h>
#include <math.h>

int main(){
	 int days,months;
	 days=0;months=0;
	/*Prompt user*/
	printf("Enter the number of days");
	scanf("%d,&days");

	months = days/30;

	printf("The number of months is %d," ,months);

	days = days%30;

	printf("The number of days is %d",days);
	return 0;


}
