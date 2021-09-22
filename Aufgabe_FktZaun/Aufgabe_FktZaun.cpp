#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "zaun.h"

int laenge;
int breite;

int main()
{
	// Aktivieren von Umlauten
	system("chcp 1252");
	printf("\n\r");

	printf(". . . . Zaun . . . . \n\r\n\r");

	// Grundstück zeichnen mit Funktion
	printf("Länge des Zaunes: ");
	scanf("%i", &laenge);
	printf("Breite des Zaunes: ");
	scanf("%i", &breite);

	printf("\n\r\n\r");
	Zeichnen(laenge, breite);

	// Umfang berechnen mit Funktion
	printf("\n\r\n\r");
	int umf = Umfang(laenge, breite);
	printf("Umfang: %i", umf);

	// Flächeninhalt berechnen mit Funktion
	int inh = FInhalt(laenge, breite);
	printf("\n\rFlächeninhalt: %i", inh);
	printf("\n\r");

}



