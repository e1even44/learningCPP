#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Zeichnen(int zahl1, int zahl2); // Prototyp: Grundstück zeichnen
int Umfang(int zahl1, int zahl2); // Prototyp: Umfang berechnen 
int FInhalt(int zahl1, int zahl2); // Prototyp: Flächeninhalt berechnen
float Diagonale(int zahl1, int zahl2); // Prototyp: Diagonale berechnen

int laenge;
int breite;

int main()
{
	// Aktivieren von Umlauten
	system("chcp 1252");
	printf("\n\r");

	printf(". . . . Grundstück . . . . \n\r\n\r");

	// Grundstück zeichnen mit Funktion
	printf("Länge des Grundstücks: ");
	scanf("%i", &laenge);
	printf("Breite des Grundstück: ");
	scanf("%i", &breite);

	printf("\n\r\n\r");
	int grundstueck = Zeichnen(laenge, breite);

	// Umfang berechnen mit Funktion
	printf("\n\r\n\r");
	int umf = Umfang(laenge, breite);
	printf("Umfang des Grundstücks: %i", umf);

	// Flächeninhalt berechnen mit Funktion
	printf("\n\r");
	int inh = FInhalt(laenge, breite);
	printf("Flächeninhalt des Grundstücks: %i", inh);

	// Diagonale berechnen mit Funktion
	printf("\n\r");
	float dia = Diagonale(laenge, breite);
	printf("Diagonale des Grundstücks: %.2lf", dia);

	printf("\n\n\r\r");
}


// Funktion: Grundstück zeichnen
int Zeichnen(int zahl1, int zahl2)
{
	for (unsigned int i = 0; i < zahl1; i++)    
	{
		for (unsigned int j = 0; j < zahl2; j++) 
		{
			printf("#");
		}
		printf("\n");
	}
	return(zahl1, zahl2);
}

// Funktion: Umfang des Rechtecks
int Umfang(int zahl1, int zahl2)		
{
	return (2 * zahl1) + (2 * zahl2);
}

// Funktion: Flächeninhalt des Rechtecks
int FInhalt(int zahl1, int zahl2)
{
	return (zahl1 * zahl2);
}

// Funktion: Diagonale des Rechtecks
float Diagonale(int zahl1, int zahl2)
{
	return sqrt((pow(zahl1, 2)) + (pow(zahl2, 2)));
}