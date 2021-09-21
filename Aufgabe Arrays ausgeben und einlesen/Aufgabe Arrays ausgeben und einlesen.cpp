#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string>

int data[] = { 1, 100, 14, 32, 10}; // Direktinitialisierung

int main()
{
// Aktivieren von Umlauten
	system("chcp 1252");
	printf("\n\r");

	for (unsigned int i = 0; i < 5; i++)
	{
		printf("Data[%u]: %i\n\r", i, data[i]);
	}

	printf("sizeof(data): %u\n\r", sizeof(data));
	printf("sizeof(data): %u\n\r", sizeof(int));

	// Berechnung
	// Anzahl der Bytes des data Arrays dividiert durch Anzahl der Bytes des Datentyps --> 20 / 4 = 5


	for (unsigned int i = 0; i < sizeof(data)/sizeof(int); i++)
	{
		printf("Data[%u]: %i\n\r", i, data[i]);
	}


}