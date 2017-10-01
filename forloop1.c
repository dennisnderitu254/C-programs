/* Program to print first 100 even numbers
 and calculate their sum using the for loop */

 #include <stdio.h>

 int main(void)
 {
 	int num=1,sum=0,i;

 	printf("\nThe first 100 even numbers are:-");

 	for(i=1;i<=100;i++)
 	{
 		if(num%2==0)
 		{
 			sum=sum+num;
 			printf("%d\t",num);
 		}
 		num++;
 	}
 	printf("\nThe sum of even numbers is =%d\t",sum);

 	return 0;
 }
