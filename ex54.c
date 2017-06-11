// This is a C Program that merges Arrays Merging Arrays

#include <stdio.h>

void merge(int[],int,int[],int,int[]);

int main()
{
	int a[100],b[100],m,n,c,sorted[200];

	printf("===================WELCOME===================\n\n");

	printf("Input number of elements in first Array\n");
	scanf("%d",&m);

	printf("input %d integers\n",m);
	for(c=0;c<m;c++){
		scanf("%d",&a[c]);
	}

	printf("Input number of Elements in second Array\n");
	scanf("%d",&b[c]);

	printf("Input %d integers\n",n);
	for(c=0;c<n;c++){
		scanf("%d",&b[c]);
	}

	merge(a,m,b,n,sorted);

	printf("Sorted array:\n");

	for(c=0;c<m+n;c++){
		printf("%d\n",sorted[c]);
	}

	return 0;

}



void merge(int a[],int m,int b[],int n,int sorted[])
{
	int i,j,k;
	j=k=0;

	for(i=0;i<m+n;){
		if(j<m && k<n){
			if(a[j]<b[k]){
				sorted[i]=a[j];
				j++;
			}
			else{
				sorted[i]=b[k];
				k++;
			}

			/*If Elements of an array is less than b
			then push it in resultant array else
			 push element of b in array*/

			i++;
		}

		else if(j == m){
			for(;i<m+n;){
				sorted[i]=b[k];
				k++;
				i++;
				/*if array a is finished push all the elements of b in resultant array*/
			}
		}

		else{
			for(;i<m+n;){
				sorted[i]=a[j];
				j++;
				i++;

				/*If array b is finished push all the elements of a in resultant array*/
			}
		}
	}
}
