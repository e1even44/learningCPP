
// Es wird lediglich ein Verweis auf das Header File *.h benötigt
// Alle benötigten Präprozessoranweisungen und Bibliotheken befinden
// sich darin.

#include "zaun.h"

// Hier werden die Prototypen ausprogrammiert.


// Funktion: Zaun zeichnen
void Zeichnen(int zahl1, int zahl2)
{
	for (unsigned char y = 0; y < zahl1; y++)
	{
		for (unsigned char x = 0; x < zahl2; x++)
		{
			if (y == 0 || y == (zahl1 - 1))
			{
				printf("*");
			}
			else
			{
				if (x == 0 || x == (zahl2 - 1))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n\r");
	}
}

// Funktion: Umfang des Zauns
int Umfang(int zahl1, int zahl2)
{
	return (2 * zahl1) + (2 * zahl2);
}

// Funktion: Flächeninhalt des Zauns
int FInhalt(int zahl1, int zahl2)
{
	return (zahl1 * zahl2);
}


