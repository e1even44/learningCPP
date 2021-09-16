#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string>

#include <iostream>

// Aufgabe: Symbol bzw. Diamant

int main()
{
	// Umlaute aktivieren
	system("chcp 1252");
	printf("\n\r");

	int zahl = 0;

	printf("Eingabe: ");
	scanf("%i", &zahl);

	// Aufgabe: Diamant

	for (unsigned char y = 0; y < (zahl * 2); y += 2) // Position der Y - Achse. Die eingegebene Zhal wird mit 2 multipliziert, da die Länge der y-Achse doppelt so groß sein soll wie die eingegebene Zahl.
	{
		for (unsigned char x = 0; x < zahl; x++) // Position der X - Achse. Die eingegebene Zahl gibt an, wie breit der Diamant ist.
		{
			if (y < zahl) 
			{
				if ((x > (zahl - y) / 2) && (x < ((zahl + y)) / 2)) // Wenn x größer ist als die eingegebe Zahl - y wenn x kleiner als die eingegebene Zahl + y ... 
				{
				printf("#");										// dann wird das Symbol # dargestellt
				}

				else
				{
					printf(" ");									// sonst werden Leerzeichen dargestellt.
				}
			}
			else
			{
				if ((x > ((y - zahl) / 2)) && (x < ((3 * zahl - y) / 2)))
				{
					printf("#");
				}
				else
				{
					printf(" ");

				}
			}
		}
	printf("\n\r");
	}
}

