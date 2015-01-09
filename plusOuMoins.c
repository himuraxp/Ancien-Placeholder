#include <stdio.h>

int main (int argc, char *argv)
{
	int nombreMystere;
	int MAX = 100;
	int MIN = 1;

	srand(time(NULL));
	nombreMystere = (rank() % (MAX -MIN + 1)) + MIN;
	
	printf("Bienvenue sur Plus ou Moins !\nLe but de ce jeu est de deviner le Monbre Mystere.");

	do
	{
		printf("Quel est le nombre ? ");
		scanf("%d", nombreChoix);

		if(nombreChoix < nombreMystere)
		{
			printf("C'est plus !\n");
		}
		else if("

