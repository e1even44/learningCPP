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

	// Grundst�ck zeichnen mit Funktion
	printf("L�nge des Zaunes: ");
	scanf("%i", &laenge);
	printf("Breite des Zaunes: ");
	scanf("%i", &breite);

	printf("\n\r\n\r");
	Zeichnen(laenge, breite);

	// Umfang berechnen mit Funktion
	printf("\n\r\n\r");
	int umf = Umfang(laenge, breite);
	printf("Umfang: %i", umf);

	// Fl�cheninhalt berechnen mit Funktion
	int inh = FInhalt(laenge, breite);
	printf("\n\rFl�cheninhalt: %i", inh);
	printf("\n\r");

}



