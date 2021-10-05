#define _CRT_SECURE_NO_WARNINGS

#include "menu02.h"

/*
Funktionen:
Linie �ber und unter dem Men� zeichnen
Die Datei �ffnen, um reinschreiben zu k�nnen
Die Datei �fnnen, um darin lesen zu k�nnen
Die Datei �ffnen, um den Text erg�nzen zu k�nnen

Erweiterungen:
Eine bestimmte Zeile ausw�hlen,
diese bearbeiten
oder l�schen.
*/

extern char filename[];

// Zeichnen von Zeichen �ber und unter dem Men�
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


// Erweitern/Anh�ngen eines Textes
void appendText(char operation['3'])
{

    // Text �ffnen
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


// Funktion f�r das �ndern und L�schen bestimmter Zeilen
void set(char line)
{
    char letter = 0;
    int number = 1;

    // Code, das in Dauerschleife die Zeilennummer z�hlt.

    do
    {
        number++;
    } while (letter=='\n');
    

    // Fenster fragt ab, in welcher Zeile eine Ver�ndeurung ausgef�hrt werden sollte.
    int zeile;
    printf("In welcher Zeile m�chten Sie �nderungen vornehmen?"
        "\n\rEingabe: ");
    scanf("%i", &zeile);
    
    // Fenster fragt ab, was getan werden soll. (Bearbeiten/L�schen)
    char optim = 0;
    int operation;
    printf("Was m�chten Sie tun? (Bearbeiten/L�schen)"
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
while, dass \n z�hlt, um stand der aktuellen zeile zu kennen.
*
*/