#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

int main()
{
	int laenge; //Länge des Grundstücks
	int breite; //Breite des Grundstücks

	printf("Grundstueck:\n\r");
	printf("\n\rGeben Sie die Laenge des Grundstuecks an: ");
	scanf("%i", &laenge);
	printf("\n\rGeben Sie die Breite des Grundstuecks an: ");
	scanf("%i", &breite);

	printf("\n\r");

	for (unsigned int i = 0; i < breite; i++)    //For-Schleife dafür, dass der Cursor "breite" mal runtergeht.
		
	{
		for (unsigned int j = 0; j < laenge; j++) //For-Schleife dafür, dass das Zeichen # "laenge" mal nach rechts geht.
		{
			printf("#");
		}
		printf("\n");
	}

}
