/* Program 2.6 Cookies and kids */
#include <stdio.h>
int main(void)
{
int cookies = 45;
int children = 7;
int cookies_per_child = 0;
int cookies_left_over = 0;


/* Calculate how many cookies each child gets when they are divided up */
cookies_per_child = cookies/children; /* Number of cookies per child */
printf("You have %d children and %d cookies", children, cookies);
printf("\nGive each child %d cookies.", cookies_per_child);
/* Calculate how many cookies are left over */
cookies_left_over = cookies%children;
printf("\nThere are %d cookies left over.\n", cookies_left_over);
return 0;
}