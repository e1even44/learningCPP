#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include "kleingross.h"

int main()
{
    system("chcp 1252");                                       // Aktivieren von Umlauten
    printf("\n\r");

    char word[100];

    printf(". . . . GROSS / kleinschreibung . . . .\n\r");      // ‹berschrift

    printf("\n\rBitte ein Wort eingeben: ");                    // Worteingabe
    scanf("%s", word);
    while (getchar() != '\n');

    printf("\n\reingabe: %s", word); 
    Kleinbuchstabe(word);                                    // Darstellung eines Wortes in Kleinbuchstaben mithilfe einer Funktion
    printf("\n\rkleingeschrieben: %s", word);
    Grossbuchstabe(word);                                    // Darstellung eines Wortes in Groﬂbuchstaben mithilfe einer Funktion
    printf("\n\rgrossgeschrieben: %s", word);               

}

/*
Es wird ein beliebiges Wort angegeben, egal ob klein, groﬂ oder gemischt geschrieben.
Bsp.: otto, OTTO, oTtO
Das Wort sollte einmal komplett kleingeschrieben, und einmal komplett groﬂgeschrieben
dargestellt werden.
So sollte es aussehen:
Ausgabe 1: otto
Ausgabe 2: OTTO
*/

/*
Internet: String To Lower
Dieser Befehl ersetzt in einem String Groﬂbuchstaben durch Kleinbuchstaben.

Die Bezeichnungen der Funktionen wurden auf "Kleinbuchstabe" und "Groﬂbuchstabe ge‰ndert,
um es verst‰ndlicher bzw. ¸bersichtlicher zu gestalten.
*/
