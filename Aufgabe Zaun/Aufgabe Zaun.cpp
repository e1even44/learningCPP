#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

int main()
{
	int width, height;

	printf("Zaun eines Grundstuecks:\n\r");
	printf("\n\rGeben Sie die Laenge fuer den Zaun an: ");
	scanf("%i", &width);
	printf("\n\rGeben Sie die Breite fuer den Zaun an: ");
	scanf("%i", &height);

	printf("\n\r");

	// Wenn y > 0 und < (height -1)
			// -> Wenn x == 0 oder x ist (width -1)
			// -> sonst LEERZEICHEN

	for (unsigned char y = 0; y < height; y++)
	{
		for (unsigned char x = 0; x < width; x++)
		{
			
			if (y == 0 || y == (height - 1))
			{
				printf("#");
			}
			
			else
			{
				if (x == 0 || x == (width - 1))
				{
					printf("#");
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



