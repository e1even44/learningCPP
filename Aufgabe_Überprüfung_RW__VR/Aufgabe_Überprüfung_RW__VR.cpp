#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

char wort[1];

int main()
{
	// Aktivieren von Umlauten
	system("chcp 1252");
	printf("\n\r");

	printf("Bitte geben Sie ein Wort ein: ", wort[0]);
	scanf("%c", &wort[0]);

	for (char j = (int i - 1); j >= 0; j--)
	{
		// Wird ein Leerzeichen erfasst abbrechen
		if (wort[j] == ' ')
		{
			break;
		}
		printf("%c", data[j]);
	}

	printf("\n\r");



}



