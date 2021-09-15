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

	int k = 0;

	// Dreieck bzw. Baumkrone
	for (unsigned int i = 1; i <= gesamthöhe; i++, k = 0)			
	{
		for (unsigned int j = 1; j <= gesamthöhe - i; j++)
		{
			printf(" ");
		}
		while (k != 2*i-1)
		{
			printf("*");
			k++;
		}
		printf("\n");
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


