#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string>

#include <iostream>

// Aufgabe: Halber Diamant
int main()
{
	// Umlaute aktivieren
	system("chcp 1252");
	printf("\n\r");
	
	int zahl = 0;

	printf("Eingabe: ");
	scanf("%i", &zahl);


	// y - Position
	for (unsigned char y = 0; y < (zahl*2); y++)
	{

		// x - Position
		for (unsigned int x = 0; x < zahl; x++)
		{

			// Wenn y kleiner gleich die Hälfte der erforderlichen Reihen ist.
			if (y < zahl)
			{

				// Solange x kleiner y ist
				if (x < y)
				{
					printf("#");
				}
			}
			// Wenn y größer als die Hälfte der erforderlichen Reihen ist.
			else
			{
				// Solange x kleiner als die Anzahl aller Reihen weniger die aktuelle Reihe (y - Position) ist.
				if (x < (2*zahl-y))
				{
					printf("#");
				}
			}
		}
		printf("\n\r");
	}


	// Aufgabe: Diamant

	for (unsigned char y = 0; y < (zahl*2); y+= 2)
	{
		for (unsigned char x = 0; x < zahl; x++)
		{
			if (y < zahl)
			{
				if ((x > (zahl - y) / 2)) && (x < ((zahl + y)) / 2))
				{
				printf("#");
				}

				else
				{
					printf(" ");
				}
			}

			else
			{
				if ((x > ((y-zahl) / 2)) && (x < ((3*zahl -y) / 2)))
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
