// Calculate simple interest

#include <stdio.h>

void main()
{
	int amount,rate,time,ans;

	printf("\nEnter Principal Amount:\n");
	scanf("%d",&amount);

	printf("\nEnter rate of interest:\n");
	scanf("%d",&rate);

	printf("\nEnter period of time:\n");
	scanf("%d",&time);

	ans = (amount*rate*time)/100;
	// This is the simple interest formula

	printf("\nSimple Interest: %d",ans);
}