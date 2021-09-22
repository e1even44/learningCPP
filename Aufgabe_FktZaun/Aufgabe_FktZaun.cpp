#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "zaun.h"
#include "read.h"

int laenge;
int breite;

int main()
{
	// Aktivieren von Umlauten
	system("chcp 1252");
	printf("\n\r");

	printf(". . . . Zaun . . . . \n\r\n\r");

	// Länge und Breite angeben
	laenge = read_unit("Länge: ");
	breite = read_int("Breite: ");

	// Grundstück zeichnen
	printf("\n\r\n\r");
	Zeichnen(laenge, breite);

	// Umfang berechnen
	printf("\n\r\n\r");
	int umf = Umfang(laenge, breite);
	printf("Umfang: %i", umf);

	// Flächeninhalt berechnen
	int inh = FInhalt(laenge, breite);
	printf("\n\rFlächeninhalt: %i", inh);
	printf("\n\r");

}
