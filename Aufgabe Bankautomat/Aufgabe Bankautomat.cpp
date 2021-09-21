#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>

	int einzahlung;
	int auszahlung;
	int kontostand = 0;
	int kontonummer[10] = { 0,1,2,3,4,5,6,7,8,9 };
	unsigned char eingabe = 0;

int main()
{
	// Umlaute aktivieren
	system("chcp 1252");
	printf("\n\r");

	//Einzahlen - E
	//Auszahlen - A
	//Zurück - Z

	printf("\n\r . . . . . . . . . . . . . . . . . .  Bankkonto . . . . . . . . . . . . . . . . . .  \n\r");

	for (unsigned char i = 0; i <= kontonummer[i]; i++)
	{
		printf("Konto[%u]: ", i);
	}

	printf("\n\r\n\rKontonummer: ");
	scanf("%i", &kontonummer);


	printf("\n\rEinzahlen: E"
		"\n\rAuszahlen: A"
		"\n\rZurück: Z\n\r");

	printf("\nEingabe: ");
	while (getchar() != '\n');
	scanf("%c", &eingabe);

	
	/*int positiv = kontostand + einzahlung;
	int negativ = kontostand - auszahlung;*/

	// Switch und While adden, damit die Schleife unendlich  mal wiederholt wird, bis man es abbricht!

	switch (eingabe)	// Anfang Switch
	{
	case 'E':
		printf("\n\rWie viel Geld möchten Sie einzahlen?: ", &einzahlung);
		scanf("%i", &einzahlung);

		printf("\n\rNeuer Saldo nach Einzahlung: %i", (kontostand + einzahlung));
		break;

	case 'A':
		printf("\n\rWie viel Geld möchten Sie abbuchen?: ", &auszahlung);
		scanf("%i", &auszahlung);

		printf("\n\rNeuer Saldo nach Abbuchung: %i", (kontostand - auszahlung));
		break;

	case 'Z':
		printf("\n\rZurück zum Hauptmenü...");
		break;

	default: printf("\n\rIhre Eingabe entspricht nicht den oben angegebenen Optionen.");
		return 0; // Ende Switch
	}

}