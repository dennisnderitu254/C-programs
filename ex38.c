// The Cosine Series

#include <stdio.h>
#include <math.h>

void main()
{
	int i,n;
	float x,val,sum=1,t=1;

	printf("Enter the value for x:\n");
	scanf("%f",&x);
	printf("\nEnter the value for n:\n");
	scanf("%d",&n);

	val = x;

	x=x*3.14159/180;
	for(i=1;i<n+1;i++)
	{
		t=(t*pow((double)(-1),(double)(2*i-1))*x*x)/(2*i*(2*i-1));
		sum = sum + t;
	}

	printf("\nCosine value of %f is:%8.4f",val,sum);

}
