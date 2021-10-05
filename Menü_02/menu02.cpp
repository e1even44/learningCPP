#define _CRT_SECURE_NO_WARNINGS

#include "menu02.h"

/*
Funktionen:
Linie über und unter dem Menü zeichnen
Die Datei öffnen, um reinschreiben zu können
Die Datei öfnnen, um darin lesen zu können
Die Datei öffnen, um den Text ergänzen zu können

Erweiterungen:
Eine bestimmte Zeile auswählen,
diese bearbeiten
oder löschen.
*/

extern char filename[];

// Zeichnen von Zeichen über und unter dem Menü
void writeLine(unsigned char length)
{
    for (unsigned char i = 0; i < length; i++)
    {
        printf("*");
    }
    printf("\n\r");
}


// Schreiben eines Textes
void writeText(char operation['1'])
{
    printf("\n\rTexteingabe: ");
    printf("\n\r");

    FILE* filePointer;
    filePointer = fopen(filename, "w");
 

    // Zeilennummerierung ?
    /*int zahler = 1;
    int merker = 0;

    for (unsigned int i = 0; i < 'w'; i++)
    {
        int c = getchar();
    
        if (c == '\n')
        {
        merker = 1;
        }

        if (merker == 1)
    
        {
        printf("\n\r%i ", zahler);
        zahler++;
        merker = 0;
        }
        if (c == '$')
        {
            break;
        }*/
  /*  }*/


    if (filePointer == NULL)
    {
        printf("Datei konnte nicht geoeffnet werden!\n\r");
        return;
    }

    char letter = 0;
    int number = 1;

    do
    {
        letter = getchar();
        fputc(letter, filePointer);

        if (letter == '\n')
        {
            printf("%i) ", number);
            number++;
        }

    } while (letter != '$');

    fclose(filePointer);
}


// Lesen eines Textes
void readText(char operation['2'])
{
    FILE* filePointer;

    filePointer = fopen(filename, "r");

    if (filePointer == NULL)
    {
        printf("Datei konnte nicht geoeffnet werden!\n\r");
        return;
    }

    char temp;
    int number = 1;

    while ((temp = fgetc(filePointer)) != EOF)
    {
        putchar(temp);

        if (temp == '\n')
        {
            printf("%i) ", number);
            number++;
        }
    }
    fclose(filePointer);
}


// Erweitern/Anhängen eines Textes
void appendText(char operation['3'])
{

    // Text öffnen
    readText(operation);

    // Text erweitern
    printf("\n\rTexteingabe: ");
    printf("\n\r");

    FILE* filePointer;

    filePointer = fopen(filename, "a");


    int zahler = 1;
    int merker = 0;

    if (filePointer == NULL)
    {
        printf("Datei konnte nicht geoeffnet werden!\n\r");
        return;
    }

    char letter = 0;
    int number = 1;

    do
    {
        letter = getchar();
        fputc(letter, filePointer);

        if (letter == '\n')
        {
            printf("%i) ", number);
            number++;
        }

    } while (letter != '$');

    fclose(filePointer);
}


// Funktion für das Ändern und Löschen bestimmter Zeilen
void set(char line)
{
    char letter = 0;
    int number = 1;

    // Code, das in Dauerschleife die Zeilennummer zählt.

    do
    {
        number++;
    } while (letter=='\n');
    

    // Fenster fragt ab, in welcher Zeile eine Verändeurung ausgeführt werden sollte.
    int zeile;
    printf("In welcher Zeile möchten Sie Änderungen vornehmen?"
        "\n\rEingabe: ");
    scanf("%i", &zeile);
    
    // Fenster fragt ab, was getan werden soll. (Bearbeiten/Löschen)
    char optim = 0;
    int operation;
    printf("Was möchten Sie tun? (Bearbeiten/Löschen)"
        "\n\rEingabe");

    if (optim == 'B')
    {
        writeText;
    }

    if (optim == 'L')
    {
        //Zeile entfernen
    }
    
    else
    {
        printf("Fehler: Ihre Eingabe entspricht nicht den Optionen.");
    }
}


/*
*
while, dass \n zählt, um stand der aktuellen zeile zu kennen.
*
*/