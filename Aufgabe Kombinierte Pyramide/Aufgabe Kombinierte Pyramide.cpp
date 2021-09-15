#define _CRT_SECURE_NO_WARNINGS
#define MAX_VALUES 100

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int eingabe[MAX_VALUES];

int main()
{
	system("chcp 1252");
	printf("\n\r");

	int eingabe;

	printf("\rGeben Sie eine Zahl ein (max. -> 100): ");
	scanf("%i", &eingabe);

	if (eingabe < 1 || eingabe > MAX_VALUES)
	{
		printf("\n\rDie Größe wurde unter-/überschritten oder entspricht nicht einer positiven ganzen Zahl!\n\r");
		return -1;
	}

	printf("\n\r");

	for (unsigned int i = 1; i <= eingabe; i++)					// Erste For-Schleife:
																// Die Zahlen werden beginnend mit 1 (bis "Eingabe") in Rauten dargestellt.										
	{															// Bei jedem Durchlauf der Schleife wird auf die vorige Zahl die Zahl 1 addiert.
		for (unsigned int j = 1; j <= i; j++)
		{
			printf("#");
		}
		printf("\n\r");
	}

	for (unsigned int i = 1; i <= eingabe - 1; i++)				// Zweite For-Schleife:
	{															// Die Zahlen werden beginnend mit "Eingabe" bis 1 in Rauten dargestellt.
		for (unsigned int j = i - 1; j < eingabe - 1; j++)		// Bei jedem Durchlauf der Schleife wird von der vorigen Zahl die Zahl 1 subtrahiert.
		{
			printf("#");
		}
		printf("\n\r");
	}
}


