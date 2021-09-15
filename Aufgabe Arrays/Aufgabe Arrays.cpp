#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	// Was möchte ich einlesen?
	// - Zahlen
	//		*Ganze Zahlen	
	//		#Positive						unsigned char, unsigned int, unsigned long
	//		#Positive/Negative				char, int, long
	//		*KommazahleN (floating point)	float, double
	// - Zeichen							char
	// - Zeichenketten						char[]
	


	double messswerte[10];

	// Werte einlesen
	for (unsigned char i = 0; i < 10; i++)
	{
		printf("Wert[%u]: ", i);
		scanf("%lf", &messswerte[i]);
	}

	// Mittelwert berechnen
	double mittelwert = 0;

	for (unsigned char i = 0; i < 10; i++)
	{
		mittelwert += messswerte[i];
	}
	printf("\n\rMittelwert: %lf\n\r", (mittelwert / 10));



}



	/*int messwerte[10];

	for (unsigned char h = 0; h < 10; h++)
	{
		printf("\n\rBitte geben Sie einen Wert ein: ");
		scanf("%i", &messwerte);
				
	}

	int max;
	int min;
	int mittel;
	int i = 0;


	for (unsigned int i = 0; i < 10; i++)
	{
		if (messwerte)
		{

		}



	}*/
