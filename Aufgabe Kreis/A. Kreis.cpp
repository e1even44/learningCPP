#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef M_PI
#define M_PI	3.14159265358979323846f
#endif

int main()
{
    printf("Kreis:");
    printf("\n");
    printf("\n\rBitte geben Sie den Radius des Kreises ein: ");
    int zahl1;
    scanf("%i", &zahl1);
    printf("\n");

    float umfang = 2*M_PI*zahl1;
    printf("\n\rumfang: %lf", umfang);

    int durchmesser = 2 * zahl1;
    printf("\n\rdurchmesser: %i", durchmesser);

    float kreisflaeche = M_PI * pow(zahl1, 2);
    printf("\n\rkreisflaeche: %lf", kreisflaeche);
}


