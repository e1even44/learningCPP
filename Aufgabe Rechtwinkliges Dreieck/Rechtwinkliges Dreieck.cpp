#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

int main()
{
    int zahl1;
    int zahl2;
    int zahl3;

    printf("Rechtwinkliges Dreieck:");
    printf("\n");
    printf("\n");
    printf("Die laengste Seite im rechtwinkligen Dreieck liegt dem rechten Winkel gegenueber. Sie heisst Hypotenuse.");
    printf("Die beiden uebrigen Seiten heissen Katheten.");
    printf("\n");
    printf("\n\rGeben Sie die gegebene Ankathete vom Winkel Alpha an:");
    scanf("%i", &zahl1);

    printf("\n");
    printf("\n\rGeben Sie die Gegenkathete vom Winkel Alpha an:");
    scanf("%i", &zahl2);

    printf("\n");
    printf("\n\rGeben Sie die Hypotenuse vom des Dreiecks an:");
    scanf("%i", &zahl3);


    int umfang = zahl1 + zahl2 + zahl3;
    printf("\n\rumfang: %i", umfang);

    int flaecheninhalt = (zahl1 * zahl2) / 2;
    printf("\n\rflaecheninhalt: %i", flaecheninhalt);

    float sin = zahl2 / zahl3;
    printf("\n\rsin: %lf", sin);

    float cos = zahl1 / zahl3;
    printf("\n\rcos: %lf", cos);

    float tan = zahl2 / zahl1;
    printf("\n\rtan: %lf", tan);

}




