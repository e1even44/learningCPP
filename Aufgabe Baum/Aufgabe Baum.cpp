#define _CRT_SECURE_NO_WARNINGS
#define MAX_VALUES 50
#define MAX_VALUES2 15

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int gesamthöhe;
int stammhöhe;

int main()
{
	// Umlaute aktivieren
	system("chcp 1252");
	printf("\n\r");

	// Überschrift
	printf("Tannenbaum !\n\r");

	// Eingabe Höhe
	printf("\n\rGeben Sie die Gesamthöhe des Baumes ein!(max. -> 50): ");
	scanf("%i", &gesamthöhe);

	if (gesamthöhe < 1 || gesamthöhe > MAX_VALUES)
	{
		printf("\n\rDie Gesamthöhe wurde unter-/überschritten oder entspricht keiner ganzen Zahl!\n\r");
		return -1;
	}
	
	printf("\r\nGeben Sie die Stammhöhe ein!(max. -> 15): ");
	scanf("%i", &stammhöhe);
	if (stammhöhe < 0 || stammhöhe > MAX_VALUES2)
	{
		printf("\n\rDie Stammhöhe wurde unter-/überschritten oder entspricht keiner ganzen Zahl!\n\r");
		return -1;
	}

	printf("\n\r");


	// //Dreieck bzw. Baumkrone

	unsigned int i;

	for (unsigned int i = 1; i < gesamthöhe*2; i+=2)
	{
		for (unsigned int k = 0; k < gesamthöhe * 2; k++)
		{
			if (k< gesamthöhe - (i / 2) || k > gesamthöhe + (i / 2))
			{
				printf(" ");
			}

			else
			{
				printf("*");
			}
		
		}
		printf("\n\r");
	}


	// Baumstamm
	for (unsigned int a = 1; a <= stammhöhe; a++)
	{
		for (unsigned int b = 1; b == 1; b++)
		{
			printf(" \r\t\t * \r\t\t");
		}
		printf("\n\r");										// Problem beim Zentrieren der Zeichen noch ungelöst.
	}
}


