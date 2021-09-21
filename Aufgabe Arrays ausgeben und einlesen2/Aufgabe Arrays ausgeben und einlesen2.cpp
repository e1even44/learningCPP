#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string>

char data[] = {
'D',
'a',
's',
' ',
'i',
's',
't',
' ',
'e',
'i',
'n',
' ',
'T',
'e',
'x',
't',
'\0'	// Terminator wird automatisch hinzugefügt!
}; 

char text[] = "Das ist ein zweiter Text";

int main()
{
	// Aktivieren von Umlauten
	system("chcp 1252");
	printf("\n\r");

	for (unsigned char i = 0; i < sizeof(data)/sizeof(char); i++)
	{
		printf("%c", data[i]);

	}
	printf("%s\n\r", data);

	printf("\n\rZweiter Text:\n\r");
	printf("Länge: %u\n\r", sizeof(text));
	printf("%s\n\r", text);

	printf("\n\r");



	// Aufgabe: Text rückwärts ausgeben
	for(unsigned char i = 16; i < sizeof(data) / sizeof(char); i--)
	{
		printf("%c", data[i]);
	}

	printf("\n\r");

	// Zweiter Lösungsweg - Nur mit positiven Zahlen
	for (unsigned char i = 1; i <= sizeof(data) / sizeof(char); i++)
	{
		printf("%c", data[(sizeof(data) / sizeof(char)) - i]);
	}

	printf("\n\r");

	// Geht beim dekrementieren (--) in den negativen Bereich
	for (char i = sizeof(data) / sizeof(char) - 1; i >= 0; i--)
	{
		printf("%c", data[i]);
	}
	printf("\n\r");

	// Aufgabe: 
	// Das
	// ist
	// ein
	// Text

	for (unsigned char i = 0; i < sizeof(data)/sizeof(char); i++)

	{
		if (data[i] == ' ')
		{
		printf("\n\r");
		}
		else
		{
			printf("%c", data[i]);
		}
		printf("\n\r");
	}


	// Aufgabe: 
	
	// txeT
	// nie
	// tsi
	// saD

	for (unsigned char i = 16; i < sizeof(data) / sizeof(char); i--)

	{
		if (data[i] == ' ')
		{
			printf("\n\r");
		}
		else
		{
			printf("%c", data[i]);
		}
		printf("\n\r");
	}



	// Aufgabe: 

	// saD
	// tsi
	// nie
	// txeT


	// Den kompletten String durchlaufen
	for (unsigned char i = 0; i < sizeof(data)/sizeof(char); i++)
	{

		// Warten bis ein Leerzeichen kommt
		if (data[i] == ' ' || data[i] == '\0')
		{

			// Vom aktuellen Leerzeichen bis zum vorherigen Leerzeichen
			// oder ansonsten bis zum Anfang (0) die Zeichenkette rückwärts durchlaufen
			for (char j = (i -1); j >= 0; j--)
			{
				// Wird ein Leerzeichen erfasst abbrechen
				if (data[j] == ' ')
				{ 
					break;
				}
				printf("%c", data[j]);
			}

			printf("\n\r");
		}
	
	}
	
	printf("\n\r");

}