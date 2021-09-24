#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include "kleingross.h"

int main()
{
    system("chcp 1252\n\r");                                    // Aktivieren von Umlauten

    char word[120];

    printf(". . . . GROSS / kleinschreibung . . . .\n\r");      // �berschrift

    printf("\n\rBitte ein Wort/einen Satz eingeben: ");         // Worteingabe
    fgets(word, 120, stdin);                                    // scanf durch fgets ausgetauscht, damit nicht nur ein Wort, sondern 
                                                                // ein kompetter Satz eingegeben und ausgelesen wird. (stdin => Standardeingabe)



    printf("\n\reingabe: %s", word); 
    Kleinbuchstabe(word);                                    // Darstellung eines Wortes in Kleinbuchstaben mithilfe einer Funktion
    printf("kleingeschrieben: %s", word);
    Grossbuchstabe(word);                                    // Darstellung eines Wortes in Gro�buchstaben mithilfe einer Funktion
    printf("grossgeschrieben: %s\n\r", word);     
}

/*
Es wird ein beliebiges Wort angegeben, egal ob klein, gro� oder gemischt geschrieben.
Bsp.: otto, OTTO, oTtO
Das Wort sollte einmal komplett kleingeschrieben, und einmal komplett gro�geschrieben
dargestellt werden.
So sollte es aussehen:
Ausgabe 1: otto
Ausgabe 2: OTTO
*/

/*
Internet: String To Lower
Dieser Befehl ersetzt in einem String Gro�buchstaben durch Kleinbuchstaben.

Die Bezeichnungen der Funktionen wurden auf "Kleinbuchstabe" und "Gro�buchstabe ge�ndert,
um es verst�ndlicher bzw. �bersichtlicher zu gestalten.
*/
