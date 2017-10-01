#include <stdio.h>

int main()
{
	int L=0;

	printf("Enter the level of loudness:\n");
	scanf("%d", &L);

	if(L<=50)
	{
	  printf("Quiet");

	}
	else if(L>=70)
	{
	   printf("Intrusive");

	}
	else if(L>=80)
	{
      printf("Annoying");

	}
	else if (L>=90)
	{

	   printf("Very Annoying");

	}

    else
    {
      printf("Uncomfortable");
    }


	return 0;


}
