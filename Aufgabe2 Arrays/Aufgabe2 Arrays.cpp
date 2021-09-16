#define _CRT_SECURE_NO_WARNINGS
// Präprozessoranweisung (keine Variable!)
#define MAX_VALUES 100
#include <stdio.h>
#include <string>
double messwerte[MAX_VALUES];
int main()
{
    // Aktivieren von Umlauten
    system("chcp 1252");
    printf("\n\r");
    // Wieviel Werte sollen eingelesen werden?
    printf("Anzahl Werte (max->%u): ", MAX_VALUES);
    unsigned int size = 0;
    //scanf("%u", &size);
    // Alternative (mit Absicherung):
    if (scanf("%u", &size) != 1)
    {
        printf("\n\rFehler bei der Eingabe\n\rProgrammabbruch\n\r");
        return -1;
    }
    // Eingabe prüfen:
    if (size < 1 || size > MAX_VALUES)
    {
        printf("\n\rDie Größe wurde unter-/überschritten\n\r");
        return -1;
    }

    // Werte einlesen (mit Absicherung)
    for (unsigned char i = 0; i < size; i++)
    {
        printf("Wert [%2u]: ", i);
        if (scanf("%lf", &messwerte[i]) != 1)
        {
            printf("Eingabefehler\n\r");
            // Fehlzeichen aus Puffer entfernen
            getchar();
            // Um die Eingabe zu wiederholen
            i--;
        }
    }
    // Mittelwert berechnen
    double mittelwert = 0;
    for (unsigned char i = 0; i < size; i++)
    {
        mittelwert += messwerte[i];
    }
    printf("\n\rMittelwert: %lf\n\r", (mittelwert / size));
}


