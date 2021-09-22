#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string>


//-30, -40, 10, 2000, 11, -1000, 20, 50, 80
int zahl[] = { -30, -40, 10, 2000, 11, -1000, 20, 50, 80 }; // Array mit 8 Zahlen (Zahl[0] bis Zahl[8])
int h, i, j;
	
int main()
{
	// Aktivieren von Umlauten
	system("chcp 1252");
	printf("\n\r");


	// Sortieren von Daten (Bubble Sort)
	// -1000
	// -40
	// -30
	// 10
	// 11 
	// 20
	// 50 
	// 80 
	// 2000

	// Array zahl[] sortieren

	for (j = 0; j < 8; j++)					// Gehe alle 9 Zahlen im Array durch (Zahl[0] bis Zahl[8])
	{
		for (i = 0; i < 8; i++)				// Vergleiche die aktuelle Zahl der äußeren Schleife also Zahl[0] und Zahl[8]												
		{
			if (zahl[i] > zahl[i + 1])		// in der inneren Schleife mit allen anderen Zahlen
			{							
				h = zahl[i];
				zahl[i] = zahl[i + 1];
				zahl[i + 1] = h;
			}
		}

	}

	printf("\n\nSortierte Ausgabe:");		// Ausgabe als sortierter Array
	for (i = 0; i < 9; i++)
	{
		printf("%i ", zahl[i]);
	}

	printf("\n\r"); 

	return(0);
}

