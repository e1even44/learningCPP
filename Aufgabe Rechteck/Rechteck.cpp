#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int zahl1;
    int zahl2;

    printf("Rechteck:"); 
    printf("\n");
    printf("\n\rBitte geben Sie die Seite a des Rechtecks ein:"); 
    scanf("%i", &zahl1);
    printf("\n");
    printf("\n\rBitte geben Sie die Seite b des Rechtecks ein:");
    scanf("%i", &zahl2);


    int umfang = zahl1 + zahl1 + zahl2 + zahl2; 
    printf("\n\rumfang: %i", umfang);

    int flaeche = zahl1 * zahl2; 
    printf("\n\rflaeche: %i", flaeche);

    float diagonal = sqrt(pow(zahl1, 2) + pow(zahl2, 2));
    printf("\n\rdiagonal: %lf", diagonal);
}

