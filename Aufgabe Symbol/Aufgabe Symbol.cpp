#define _CRT_SECURE_NO_WARNINGS
#define MAX_VALUES 100

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int eingabe[MAX_VALUES];

int main()
{
	system("chcp 1252");
	printf("\n\r");

	int eingabe;

	printf("\rGeben Sie eine Zahl ein (max. -> 100): ");
	scanf("%i", &eingabe);

	if (eingabe < 1 || eingabe > MAX_VALUES)
	{
		printf("\n\rDie Größe wurde unter-/überschritten oder entspricht nicht einer positiven ganzen Zahl!\n\r");
		return -1;
	}

	printf("\n\r");

	int k = 0;
	// Obere Hälfte des Diamanten (zentriertes Dreieck)

	for (unsigned int i = 1; i <= eingabe; i++, k = 0)
	{
		for (unsigned int j = 1; j <= eingabe - i; j++)
		{
			printf(" ");

		}
		while (k != 2 * i - 1)
		{
			printf("#");
			k++;
		}
		printf("\n");
	}

	// Untere Hälfte des Diamanten

	for (unsigned int i = 1; i <= eingabe-1; i++)
	{
		for (unsigned int j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (unsigned int k = 1; k <= 2*(eingabe-i)-1; k++)
		{
			printf("#");
		}
		printf("\n");											// Problem beim Zentrieren der Zeichen noch ungelöst.
	}

}




