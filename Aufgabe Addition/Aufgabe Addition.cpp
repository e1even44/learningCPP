#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	//Addition der Zahlen 1-100

 /*   int i, summe = 0;

	for (i = 1; i <= 100; i++)
	{
		summe = summe + i;
		printf("Summe: %d\n", summe);
	}*/


	unsigned int temp = 0;

	for (unsigned int i = 1; i <= 100; i++)
	{
		printf("%u, ", i);

		temp = temp + i;
		/*Kurzform:
		 temp += i;*/
	}
	printf("Ergebnis: %u\n\r", temp);



	//Addition aller geraden Zahlen bis 100
	/*int i, summe = 0;

	for (i = 1; i <= 50; i++)
	{
	    summe = summe + 2;
	    printf("Summe: %d\n", summe);*/

	unsigned int temp = 0;
	for (unsigned int i = 2; i <= 100; i++)
	{
		printf("%u, ", i++);
		temp = temp + i;
	}
	printf("Ergebnis:%u\n\r, temp");



	//Aufsummieren der Zahl um 2 Werte

	//int i, summe = 0;

	//for (i = 0; i <= 99; i+=2)
	//{
	//    summe = summe + i;
	//    printf("Summe: %d\n", summe);

	unsigned int temp = 0;
	for (unsigned int i = 1; i <= 99; i++)
	{
		printf("%u, ", i++);
		temp = temp + i;
	}
	printf("Ergebnis:%u\n\r, temp");

}

