#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int konten[] = { 0,0,0,0,0,0,0,0,0,0 };

	printf("\n\r. . . . . . . . . . . . . . . .Bankkonto . . . . . . . . . . . . . . . .\n\r"); // Überschrift wird nur 1 mal angegeben weil vor while.

	while (true) // While-Endlosschleife 
	{
		int kontoIndex = -1;

		printf("\n\r\n\rBitte geben Sie die gewuenschte Kontonummer ein! "
			"[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]\n\r"
			"Kontonummer: "); //Eingabe der Kontonummer
		scanf("%i", &kontoIndex);

		if (kontoIndex >= 10 || kontoIndex < 0) // Wenn die eingegebene Kontonummer kleiner gleich 0 oder größer gleich 10 ist ...
		{
			printf("Ihre Eingabe ist fehlerhaft."
				" Bitte ueberpruefen Sie Ihre Kontonummer!"); // ... wird eine Fehlermeldung angezeigt.
			continue; // Das Programm springt wieder zum Anfang: es wird wieder nach einer Kontonummer gefragt.
		}

		printf("\033[2J\033[1;1H"); // Bringt den Cursor zum Anfang

		while ((getchar()) != '\n'); // Abwarten und Clearen

		unsigned char kommando = 0; // Kommando = Eingabe bzw. Befehl (E, A und Z)
		printf("\n\rAusgewaehltes Konto: %i\n\r", kontoIndex); // Zeigt das ausgewählte Konto (z.B. Konto 7) an.
		printf("Kontostand: EUR %i\n\r", konten[kontoIndex]); // Zeigt den Kontostand des ausgewählten Kontos an (zu Beginn immer 0).

		printf("\n\rEinzahlen: E\n\r" // Befehl Einzahlen
			"Auszahlen: A\n\r" // Befehl Auszahlen 
			"Zueruck: Z\n\r"); //Befehl Zurück
		printf("Warte auf Befehl ... : "); // Hier gibt man ein, welches der drei Befehle man ausführen möchte.
		scanf("%c", &kommando);
		while ((getchar()) != '\n'); //Abwarten und Clearen

		if (kommando == 'E') // Wenn der Befehl 'E' eingegeben wird ...
		{
			int summe = 0;
			printf("\n\rWie viel Geld moechten Sie einzahlen?: EUR "); // ... wird gefragt, wie viel Geld man einzahlen möchte.
			scanf("%i", &summe); // Summe = Geldbetrag, den man ein-/auszahlen möchte
			while ((getchar()) != '\n');

		/*	konten[kontoIndex] += summe;*/
			printf("\n\rSie befinden sich auf Konto Nr. %i!\n\r", kontoIndex);
			printf("Der neue Saldo auf diesem Konto betraegt: EUR %i\n\r", (konten[kontoIndex] += summe)); // gibt den aktuellen Kontostand nach der Ein-/Auszahlung an

		}

		else if (kommando == 'A') // Wenn der Befehl 'A' eingegeben wird ...
		{
			int summe = 0;
			printf("\n\rWie viel Geld moechten Sie auszahlen?: EUR "); // ... wird gefragt, wie viel Geld man auszahlen möchte.
			scanf("%i", &summe); // Summe = Geldbetrag, den man ein-/auszahlen möchte
			while ((getchar()) != '\n');

		/*	konten[kontoIndex] -= summe;*/
			printf("\n\rSie befinden sich auf Konto Nr. %i!\n\r", kontoIndex); // Erinnert, auf welchem Konto wir uns befinden.
			printf("Der neue Saldo auf diesem Konto betraegt: EUR %i\n\r", (konten[kontoIndex] -= summe)); // gibt den aktuellen Kontostand nach der Ein-/Auszahlung an

		}

		else if (kommando == 'Z') // Wenn der Befehl 'A' eingegeben wird ...
		{
			continue; // wird wieder zum Hauptmenü bzw. zum Anfang des Programmes gesprungen.
		}

		else // Wenn man etwas sonstiges eingibt ... 
		{
			printf("\n\rFehler: Ihre Eingabe entspricht nicht den angefuehrten Befehlen."
				"\n\r\tZuerueck zum Hauptmenu...");
			continue;
		}

			//// Fragt, ob ein weiterer Vorgang auf aktuellem Konto gewünscht ist.
			//printf("\n\n\r\rMoechten Sie weitere Buchungen auf diesem Konto taetigen?");
			//printf("\n\rEinzahlen: E\n\r" 
			//	"Auszahlen: A\n\r" 
			//	"Zueruck: Z\n\r"); 
			//printf("Warte auf Befehl ... : "); 
			//scanf("%c", &kommando);
			//while ((getchar()) != '\n');
			//continue;
	}

}