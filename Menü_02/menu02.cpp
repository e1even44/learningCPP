#define _CRT_SECURE_NO_WARNINGS

#include "menu02.h"

/*
Funktionen:
Linie über und unter dem Menü zeichnen
Die Datei öffnen, um reinschreiben zu können
Die Datei öfnnen, um darin lesen zu können
Die Datei öffnen, um den Text ergänzen zu können
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


/* 
 Bestimmte Zeilen bearbeiten oder löschen 
 */


// Funktion für das Ändern und Löschen bestimmter Zeilen
void set(char line)
{
    FILE* filePointer;
    filePointer = fopen(filename, "a");

    char letter = 0;
    int number = 1;
    int eingabe = 0;

    letter = getchar();

    while (true)
    {
        if (letter == '\n')
        {
            printf("Bearbeiten oder Löschen . . . ");

            if (scanf("%s", eingabe) == 'B' || scanf("%s", eingabe) == 'b')
            {

            }
        
        }

    }

}