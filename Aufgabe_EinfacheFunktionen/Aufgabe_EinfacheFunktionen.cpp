#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


// Prototypen
int Addition(int zahl1, int zahl2); 
void Line(int zahl1);
void Line2(int zahl, int zeichen);

int main()
{
	// Aktivieren von Umlauten
	system("chcp 1252");


	printf("\n\r");
	
	// Addition
	int berechne = Addition(10, 20);
	printf("Ergebnis: %i\n\r", berechne);

	printf("\n\r");

	// Line 
	Line(10);

	printf("\n\r");

	// Line2 Zeichen
	int symbol;

	printf("Geben Sie ein Zeichen ein: ");
	scanf("%c", &symbol);
	printf("\n\r");
	Line2(20, symbol);

	printf("\n\r");
}

//Funktion: Addition
int Addition(int zahl1, int zahl2)
{
	return (zahl1 + zahl2);
}

//Funktion: Line
void Line(int l)
{
	
	for (unsigned int j = 0; j < l; j++) 
	{
		printf("=");
	}

	printf("\n\r");
}

void Line2(int zahl, int zeichen)
{
	for (unsigned int j = 0; j < zahl; j++) 
	{
		printf("%c", zeichen);
	}
}