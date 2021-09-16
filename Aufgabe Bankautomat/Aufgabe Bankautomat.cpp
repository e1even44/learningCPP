#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	// Umlaute aktivieren
	system("chcp 1252");
	printf("\n\r");

	/*int kontonummern[10];*/
	
	int kontonummern[]; {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};


	int eingabe;
	//Einzahlen - E
	//Abheben - A
	//Zurück - Z

	int einzahlungsbetrag;
	int abhebungsbetrag;
	int neuersaldo;

	printf("\n\r . . . . . . . . . . . . . . .  Bankkonto . . . . . . . . . . . . . . .  \n\r");

	printf("\nKontonummer: ");
	scanf("%i", &kontonummern);

	printf("\n\rKontostand: \n\r", &kontonummern);
	
	printf("Einzahlen: E\n\r");
	printf("Abheben: A\n\r");
	printf("Zurück: Z\n\r");
	printf("Eingabe: \n\r", &eingabe);
	scanf("\n", &eingabe);



	for (unsigned int i = 0; i < eingabe; i++)
	{
	if (eingabe )
	{
		printf("\n\Wie viel Geld möchten Sie einzahlen?: ", &einzahlungsbetrag); 
		scanf("\n\r%i", &einzahlungsbetrag);
	}
	}	
}
