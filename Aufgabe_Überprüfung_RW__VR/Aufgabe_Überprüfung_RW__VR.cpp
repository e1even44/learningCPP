#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "reverse.h"
#include <string>


int main()
{
    char word[100] = { 0 };
    char backw[100] = { 0 };
    /*int temp = 0;
    int len = 0;
    int i = 0, j = 0;*/
  

    printf(". . . . forwards / backwards . . . .\n\r");

    //Wort eingeben
    printf("\n\rBitte ein Wort eingeben: ");
    scanf("%s", word);
    while (getchar() != '\n');

    //Wort rückwärts ausgeben 
 /*   Reverse(word);
    printf("\n\rWord Reversed: %s\n", word);
   
    printf("\n\r");
    printf("\n\r");*/


    // ANDERE LÖSUNG

    unsigned char length = 0;
    while (word[length] != '\0')
        length++;

    //Wort vorwärts ausgeben (Lösung Simon)
    printf("\n\rVorwaerts: ");
    for (unsigned char i = 0; i < length; i++)
    {
        if (word[i] == '\0')
            break;
        printf("%c", word[i]);
        backw[length - i - 1] = word[i];
    }

    // Wort rückwärts ausgeben (Lösung Simon)
    printf("\n\rRueckwaerts: ");
    for (unsigned char i = 0; i < length; i++)
    {
        if (word[i] == '\0')
            break;
        printf("%c", backw[i]);
    }

    printf("\n\r");

    // Vergleich, ob das Wort vorwärts und rückwärts gleich ist. (Palindrom)
    unsigned char gleich = 1; // Variablen zum überprüfen, ob die Wörter gleich sind

    for (unsigned char i = 0; i < length; i++)
    {
        if (word[i] != backw[i]) // Überprüft jeden Buchstaben
        {
            gleich = 0; // Setzt Variable, wenn ungleich
            break;
        }
    }

    printf("\n\r");

    if (gleich) // Wenn das Wort vorwärts und rückwärts gleich ist, dann...
        printf("n\rDas Wort ist rueckwaerts gleich! (Palindrom)");
    
    else // Wenn das Wort vorwärts und rückwärts ungleich ist, dann...
        printf("n\rDas Wort ist rueckwaerts NICHT nicht gleich!");

}



