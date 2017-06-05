// This is a program that does a binary search using Recursion

#include <stdio.h>

int main()
{
	int a[10],i,n,m,c,l,u;
	printf("Enter the size of the array: \n");
	scanf("%d",&n);
	printf("Enter the number of elements of the array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

    
    printf("Enter the number to be search:");
    scanf("%d",&m);

    l=0,u=n-1;
    c=binary(a,n,m,l,u);
    if(c==0)
    	printf("Number is not found.");
    else
    	printf("Number is found.");
    return 0;
}

/* Binary search will search element at middle,if element is not found
and if the element to be searched is less than middle then it will search only
in lower part and if greater then in upper part
*/

int binary(int a[],int n,int m,int l,int u)
{
	int mid,c=0;
	if(l<=u){
		mid=(l+u)/2;
    if(m==a[mid]){
    	c=1;
    }

    else if(m<a[mid]){
    	return binary(a,n,m,l,mid-1);
    }

    else
    	return c;
	}
}