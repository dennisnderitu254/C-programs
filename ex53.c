// Delete an Element from an array

#include <stdio.h>

int main()
{
	int array[100],position,c,n;

	printf("=================WELCOME=====================");

	printf("Enter the number of Elements in the Array : \n");
	scanf("%d",&n);

	printf("Enter %d Elements\n",n);

	for(c=0;c<n;c++)
	scanf("%d",&array[c]);

    printf("Enter the location where you want to delete the Element\n");
    scanf("%d",&position);

    if(position >= n+1);
        printf("Deletion not possible.\n");

    // Need some debugging here asap
    else
    {
    	for(c=position-1;c<n-1;c++)
    		array[c]=array[c+1];

    	/* from given position shifting all
    	Elements by one position down */

    	printf("The resultant array is\n");
        printf("=======================THANK YOU==================");

    	for(c=0;c<n-1;c++)
    	printf("%d\n",array[c]);
    }

    return 0;


}
