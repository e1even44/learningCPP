#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	// Umlaute aktivieren
	system("chcp 1252");
	printf("\n\r");

	int kontonummern[10];
	int kontostand = 0;

	int eingabe;
	int E; //Einzahlen
	int A; //Abheben
	int Z; //Zurück

	int einzahlungsbetrag;
	int abhebungsbetrag;
	int neuersaldo;

	printf("\n\r . . . . . . . . . . . . . . .  Bankkonto . . . . . . . . . . . . . . .  \n\r");

	printf("\nKontonummer: ");
	scanf("%i", &kontonummern);

	printf("\n\rKontostand: \n\r", &kontostand);
	
	printf("Einzahlen: E\n\r", &E);
	printf("Abheben: A\n\r", &A);
	printf("Zurück: Z\n\r", &Z);
	printf("Eingabe: \n\r", &eingabe);
	scanf("\n", &eingabe);



	for (unsigned int i = 0; i < eingabe; i++)
	{
	if (eingabe == E)
	{
		printf("\n\Wie viel Geld möchten Sie einzahlen?: ", &einzahlungsbetrag); 
		scanf("\n\r%i", &einzahlungsbetrag);
	}
	}	
}
