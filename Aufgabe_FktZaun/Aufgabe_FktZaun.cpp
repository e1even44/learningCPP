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

	// L�nge und Breite angeben
	laenge = read_unit("L�nge: ");
	breite = read_int("Breite: ");

	// Grundst�ck zeichnen
	printf("\n\r\n\r");
	Zeichnen(laenge, breite);

	// Umfang berechnen
	printf("\n\r\n\r");
	int umf = Umfang(laenge, breite);
	printf("Umfang: %i", umf);

	// Fl�cheninhalt berechnen
	int inh = FInhalt(laenge, breite);
	printf("\n\rFl�cheninhalt: %i", inh);
	printf("\n\r");

}
