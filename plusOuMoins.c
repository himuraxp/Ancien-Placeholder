#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv)
{
<<<<<<< HEAD
	//Initialisation des variables.
	int nombreMystere = 0, nombreChoix = 0;
	const int MAX = 100, MIN = 1;
	
	//Création d'un nombre aléatoire compris entre 1 et 100.
	srand(time(NULL));
	nombreMystere = (rand() % (MAX -MIN + 1)) + MIN;
		 
	printf("Bienvenue sur Plus ou Moins !\nLe but de ce jeu est de deviner le Nombre Mystere.\nLe Nombre Mystere est compris entre 1 et 100 !\n");
		
	//Tant que le nombre entré est different du nombre aléatoire on recommence.  	
	do
=======
	int nombreMystere, nombreChoix;
	const int MAX = 100, MIN = 1;

	srand(time(NULL));
	nombreMystere = (rand() % (MAX -MIN + 1)) + MIN;
	
	
	printf("Bienvenue sur Plus ou Moins !\nLe but de ce jeu est de deviner le Monbre Mystere.\n");

	
	while(nombreChoix =! nombreMystere)
>>>>>>> a72bad1... plusOuMoins.c
	{
		//On demande le nombre.
		printf("Quel est le nombre ? ");
		scanf("%d", &nombreChoix);
<<<<<<< HEAD

		//On compare le nombre entré avec le nombre aléatoire.
		if (nombreMystere > nombreChoix)
			{printf("C'est plus !\n");}

		else if (nombreMystere < nombreChoix) 
			{printf("C'est moins !\n");}
		
		else
			{printf("Bravo, vous avez trouve le nombre mystere !!!\n");}
	
	} while(nombreChoix != nombreMystere);

=======

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
>>>>>>> a72bad1... plusOuMoins.c

	return 0;
}
