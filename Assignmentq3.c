/*

Write a C program that uses four functions namely input(),
getGrade(), output() and main() to read in the average marks
scored by a student and output the grade attained. The input
function is used to read marks for each 5 subjects and then returns
the average mark for a student counts the number of failing marks(marks below 40%). This function should only accept values that fall
within the range 0- 100. The average mark is then passed as a
parameter to the getGrade() function which uses it to assign a grade
based on the following classification:
Mark
Grade
75 and above A

60 and below 75 B
50 and below 60 C
40 and below 50 D
Below 40 E

The average mark and computed grade are then passed as
parameters to the output() function, which displays the average
mark, number of failing marks and the grade. All functions are called
from main. Allow the program to repeatedly ask a user for the
average mark and display the grade.

*/

#include <stdio.h>

int input(int mark[],int i)
{
    for(i=0;i<5;i++)
    {
        invalid:
        printf("\nEnter the mark of subject:\n");
        scanf("%d",&mark[i]);
        if (mark[i]<0)
        {
            printf("Invalid mark!!");


        }
        else if(mark[i]>100)
        {
            printf("Invalid mark!!");

        }
    }
}


void getGrade(int mark[],int i)
{

    for(i=0;i<5;i++)
    if(mark[i]<40){
	printf("\nSubject %d grade is E",i+1);
	}
	else if(mark[i]<50){
	printf("\nSubject %d grade is D",i+1);
	}
	else if(mark[i]<60){
	printf("\nSubject %d grade is C",i+1);
	}
	else if(mark[i]<75){
	printf("\nSubject %d grade is B",i+1);
	}
	else
        {
	printf("\nSubject %d grade is A",i+1);
	}
}



int output(int mark[],int i)
{
    float avg=0;
    int sum=0,fail=0;

    for(i=0;i<5;i++)
    {
        sum+=mark[i]; // sum = sum + mark
        if(mark[i]<40)
        {
            fail++;
        }
    }
    avg=sum/5;
    if(mark[i]<40){
	printf("\nThe Average grade is E");
	}
	else if(avg<50){
	printf("\nThe Average grade is D");
	}
	else if(avg<60){
	printf("\nThe Average grade is C");
	}
	else if(avg<75){
	printf("\nThe Average grade is B");
	}
	else
        {
	printf("\nThe Average grade is A");
	}
	printf("\nNo of failed subjects is %d \nThe average mark is %.2f\n",fail,avg);
}


void main()
{
    int mark[5],fail=0,sum=0,i=0;
    input(mark,i);
    getGrade(mark,i);
    output(mark,i);
return 0;
}
