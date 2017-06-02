/*
A program is required for a computer game.
The user keys in the number of rounds he wishes to play. For each round the user enters
his lucky number.
The program takes the number and divides it with a secret number.

If the remainder of the division is zero, it is
considered a draw for the round and the total score is incriminated
by 1. Otherwise if it is any other even number, it is considered a win
for the round and the total score is incremented by 3. However if it
is an odd number, it is considered a loss for the round and the total
score is decremented by 3.

This is done until he completes his
rounds. He wins if the total score at the end is a positive number.
Write a C program to accomplish this.

*/

#include <stdio.h>
#include <math.h>

int main()
{
	int sn=10;
	int number = 0;
	float rounds,score = 0;
	int ln,result;		
	

	printf("Enter the number of rounds: \n");
	scanf("%f",&rounds);	
	if(rounds > 0)
	{		
		while(number < rounds){
			number = number + 1;
			printf("Enter the lucky number: \n");
			scanf("%d",&ln);

			if (ln > 0 || ln == 0)
			{
				result = ln/sn;
				if (ln % sn  == 0)
				{
					if ((result%2)* 2 == result || (result%2)*2 > 0)
					{
						//win
						score += 3;
					}
					else{
						//draw
						score += 1;
					}
				}
				else{
					//lose
					score -= 3;
				}
			}
			else{
				printf("Invalid\n");
			}
			if (number == rounds)
			{
				printf("\n Your score is :%.f\n", score);
			}
		}

	}
	else{
		printf("Invalid\n");
		main();
	}
	
}
