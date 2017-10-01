/*
write a function that takes two values -d and swaps them


*/

/* function definition to swap the values */

#include <stdio.h>

/* function declaration */

void swap(int *x, int *y);

int main ()
{

/* local variable definition */
int a,b;

printf("Enter two values:");
scanf("%d%d",&a,&b);

printf("Before swap, value 1 : %d\n", a );
printf("Before swap, value 2 : %d\n", b );

/* calling a function to swap the values.
* &a indicates pointer to a i.e. address of variable a and
* &b indicates pointer to b i.e. address of variable b.
*/
swap(&a, &b);

printf("After swap, value 1: %d\n", a );
printf("After swap, value 2 : %d\n", b );
return 0;
}

void swap(int *x, int *y)
{
int temp;
temp = *x; /* save the value at address x */
*x = *y; /* put y into x */
*y = temp; /* put temp into y */

}
