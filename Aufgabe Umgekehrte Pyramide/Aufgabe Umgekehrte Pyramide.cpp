#define _CRT_SECURE_NO_WARNINGS
#define MAX_VALUES 100

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

	printf("\rGeben Sie eine Zahl ein (max. -> 100): ");
	scanf("%i", &eingabe);
	printf("\n\r");

	if (eingabe < 1 || eingabe > MAX_VALUES)		// If-Verzweigung: Es dürfen nur ganze positive Zahlen von 1 bis 150 eingegeben werden.
	{												// Bei Eingabe einer Zahl über 150, eines Buchstaben oder einer negativen Zahl wird das Programm beendet.
		printf("Die Größe wurde unter-/überschritten oder entspricht nicht einer positiven ganzen Zahl!\n\r");
		return -1;
	}

	for (unsigned int i = 1; i <= eingabe; i++)		// For-Schleife beginnend mit der eingegebenen Zahl. (z.B. 41)
	{
		for (unsigned int j = i-1; j < eingabe; j++)  // (i-1) bedeutet, dass von der eingegebenen Zahl immer die Zahl 1 subtrahiert wird, bis nur noch 1 übrig ist.
		{
			printf("#");
		}

		printf("\n\r");
	}





}
