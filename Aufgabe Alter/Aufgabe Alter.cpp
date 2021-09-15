#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>

int main()
{

    printf("\rAufgabe Alter");
    printf("\n");
    printf("\n\rBitte geben Sie ihr Geburtsjahr ein: ");

    int zahl11;
	scanf("%i", &zahl11);

	//if (zahl11 <= 2003)
	//{
	//	Wenn die erste Bediungung wahr ist
	//	printf("Sie sind in Oesterreich Erwachsen!\n\r");
	//}

	//else
	//{
	//	Wenn keine Bedingung war ist
	//	printf("Sie sind in Oesterreich nicht erwachsen!\n\r");
	//}

	//if (zahl11 <= 2000)
	//{
	//	Wenn die erste Bediungung wahr ist
	//	printf("Sie sind in Amerika Erwachsen!\n\r");
	//}

	//else
	//{
	//	Wenn keine Bedingung war ist
	//	printf("Sie sind in Amerika nicht Erwachsen!\n\r");
	//}

	if (zahl11 <= 2000)
	{
		//Wenn die erste Bediungung wahr ist
		printf("Sie sind Erwachsen in Oesterreich und Amerika!\n\r");
	}

	else if (zahl11 <= 2003)
	{
		//Wenn die zweite Bediungung wahr ist
		printf("Sie sind Erwachsen in Oesterreich!\n\r");
	}

	// Wenn keine der vorherigen Bedingungen wahr sind
	else
	{
		//Wenn keine Bedingung war ist
		printf("Sie sind noch nirgends erwachsen!\n\r");
	}

	printf("Ihr Alter:%i", 2021-zahl11);
	printf("\n");

	char zeichen;
	zeichen = '[*]';
	int sternchenalter = 2021 - zahl11;

	printf("Ihr Alter in Sternchen: %i\n", sternchenalter);
	printf("\n");

	printf("\n\r[");
	for (unsigned int i = 0; i < 2021-zahl11; i++)
	{
		printf("*");
	}
	printf("]");

}