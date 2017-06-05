// Volume of cylinder
// sshkey
#include <stdio.h>

void main()
{
	float vol,pie=3.14;
	float r,h;

	printf("ENTER THE VALUE OF RADIUS:-\n");
	scanf("%f",&r);

	printf("ENTER THE VALUE OF HEIGHT:-\n");
	scanf("%f",&h);

	vol = pie*r*r*h;
	printf("VOLUME OF CYLINDER IS:%3.2f\n",vol);
}

