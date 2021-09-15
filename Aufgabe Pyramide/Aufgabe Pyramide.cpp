#define _CRT_SECURE_NO_WARNINGS
#define MAX_VALUES 150

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int eingabe[MAX_VALUES];

int main()
{
	//Aktivieren von Umlauten
	system("chcp 1252");
	printf("\n\r");

	int eingabe;

	printf("\rGeben Sie eine Zahl ein (max. -> 150): ");
	scanf("%i", &eingabe);

	if (eingabe < 1 || eingabe > MAX_VALUES)		// If-Verzweigung: Es dürfen nur ganze positive Zahlen von 1 bis 150 eingegeben werden.
	{												// Bei Eingabe einer Zahl über 150, eines Buchstaben oder einer negativen Zahl wird das Programm beendet.
		printf("\n\rDie Größe wurde unter-/überschritten oder entspricht nicht einer positiven ganzen Zahl!\n\r");
		return -1;
	}



	for (unsigned int i = 1; i <= eingabe; i++)		// For-Schleife beginnend mit der Zahl 1.
													// Jedes Mal, wenn eine neue Zeile begonnen wird, wird zur vorherigen Zahl 1 addiert, bis die eingegebene Zahl herauskommt.
	{
		for (unsigned int j = 1; j <= i; j++)
		{
			printf("#");
		}

		printf("\n\r");
	}

	
	









}


