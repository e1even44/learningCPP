#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>

	int einzahlung;
	int auszahlung;
	int kontostand = 0;

int main()
{
	// Umlaute aktivieren
	system("chcp 1252");
	printf("\n\r");

	//Einzahlen - E
	//Auszahlen - A
	//Zurück - Z


	printf("\n\r . . . . . . . . . . . . . . .  Bankkonto . . . . . . . . . . . . . . .  \n\r");

	int kontonummer[10];

	for (unsigned char i = 0; i <= 9; i++)
	{
		printf("Konto[%u]: ", i);
	}

	printf("\n\r\n\rKontonummer: ");
	scanf("%i", &kontonummer);

	printf("\nEinzahlen: E\n\rAuszahlen: A\n\rZurück: Z\n\r");

	unsigned char eingabe = 0;

	printf("\nEingabe: ");
	while (getchar() != '\n');
	scanf("%c", &eingabe);

	int positiv = kontostand + einzahlung;
	int negativ = kontostand - auszahlung;

	if (eingabe == 'E')
	{
		printf("\n\rWie viel Geld möchten Sie einzahlen?: ");
		scanf("%i", &positiv);

		printf("\n\rNeuer Saldo nach EInzahlung: %i", positiv);	
		
	}
	if (eingabe == 'A')
	{
		printf("\n\rWie viel Geld möchten Sie abbuchen?: ");
		scanf("%i", &negativ);

		printf("\n\rNeuer Saldo nach Abbuchung: %i", negativ);
	}
	
	else if (eingabe == 'Z')
	{
		printf("Zurück zum Hauptmenü...");
		return-1;
	}


}