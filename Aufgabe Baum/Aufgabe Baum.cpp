#define _CRT_SECURE_NO_WARNINGS
#define MAX_VALUES 50
#define MAX_VALUES2 15

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int gesamth�he;
int stammh�he;

int main()
{
	// Umlaute aktivieren
	system("chcp 1252");
	printf("\n\r");

	// �berschrift
	printf("Tannenbaum !\n\r");

	// Eingabe H�he
	printf("\n\rGeben Sie die Gesamth�he des Baumes ein!(max. -> 50): ");
	scanf("%i", &gesamth�he);

	if (gesamth�he < 1 || gesamth�he > MAX_VALUES)
	{
		printf("\n\rDie Gesamth�he wurde unter-/�berschritten oder entspricht keiner ganzen Zahl!\n\r");
		return -1;
	}
	
	printf("\r\nGeben Sie die Stammh�he ein!(max. -> 15): ");
	scanf("%i", &stammh�he);
	if (stammh�he < 0 || stammh�he > MAX_VALUES2)
	{
		printf("\n\rDie Stammh�he wurde unter-/�berschritten oder entspricht keiner ganzen Zahl!\n\r");
		return -1;
	}

	printf("\n\r");


	// //Dreieck bzw. Baumkrone

	unsigned int i;

	for (unsigned int i = 1; i < gesamth�he*2; i+=2)
	{
		for (unsigned int k = 0; k < gesamth�he * 2; k++)
		{
			if (k< gesamth�he - (i / 2) || k > gesamth�he + (i / 2))
			{
				printf(" ");
			}

			else
			{
				printf("*");
			}
		
		}
		printf("\n\r");
	}


	// Baumstamm
	for (unsigned int a = 1; a <= stammh�he; a++)
	{
		for (unsigned int b = 1; b == 1; b++)
		{
			printf(" \r\t\t * \r\t\t");
		}
		printf("\n\r");										// Problem beim Zentrieren der Zeichen noch ungel�st.
	}
}


