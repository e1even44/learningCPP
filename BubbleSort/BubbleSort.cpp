#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int zahl[] = { -30, -40, 10, 2000, 11, -1000, 20, 50, 80 };

int main()
{
	printf(". . . . . . BubbleSort . . . . . .\n\n\r\r\n\r");

	// Bubble Sort
	unsigned char loop;
	do
	{
		loop = 0;

		printf("[ ");

		for (unsigned char i = 0; i < (sizeof(zahl)/sizeof(int) -1); i++)
		{
			if (zahl[i] > zahl[(i + 1)]) 
			{
				int temp = zahl[i];
				zahl[i] = zahl[(i + 1)];
				zahl[(i + 1)] = temp;

				loop = 1;
			}
			printf("%i, ", zahl[i]);

		}

		printf("%i ]\n\r", zahl[(sizeof(zahl) / sizeof(int) - 1)]);

	} while (loop);

	printf("\n\r\n\r");
}

/*
Zuhause jede Zeile kommentieren
und versuchen, den Sinn dahinter zu verstehen.
Eventuell mit dem Wissen eine neue Aufgabe erstellen,
die mit BubbleSort gelöst werden sollte.
*/