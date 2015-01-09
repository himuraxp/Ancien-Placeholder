#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv)
{
	int nombreMystere, nombreChoix;
	const int MAX = 100, MIN = 1;

	srand(time(NULL));
	nombreMystere = (rand() % (MAX -MIN + 1)) + MIN;
	
	
	printf("Bienvenue sur Plus ou Moins !\nLe but de ce jeu est de deviner le Monbre Mystere.\n");

	
	while(nombreChoix =! nombreMystere)
	{
		printf("Quel est le nombre ? ");
		scanf("%d", &nombreChoix);

		if(nombreChoix < nombreMystere)
		{
			printf("C'est plus !\n");
		}
		else
		{
			printf("C'est moins !\n");
		}
	}

	printf("Bravo, vous avez trouve le nombre mystere !!!\n");

	return 0;
}
