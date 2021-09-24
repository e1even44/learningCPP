#include "kleingross.h"

// Funktion für die Darstellung des Wortes in Kleinbuchstaben
char* Kleinbuchstabe(char* string)
{
    int i;
    int lenght = strlen(string);

    for (i = 0; i < lenght; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] += 32; // += ist im Prinzipp dasselbe wie a++ oder a+a, wird nur anders geschrieben. In diesem Fall +32.
        }                    // Laut ASCII-Tabelle: 32 = Leerzeichen.
    }
    return string;
}

// Funktion für die Darstellung des Wortes in Großbuchstaben
char* Grossbuchstabe(char* string)
{
    int i;
    int lenght = strlen(string);

    for (i = 0; i < lenght; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] -= 32; // -= ist im Prinzipp dasselbe wie a-- oder a-a, wird nur anders geschrieben. In diesem Fall -32.
        }                    // Laut ASCII-Tabelle: 32 = Leerzeichen.
    }
    return string;
}