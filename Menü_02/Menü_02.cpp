#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string>
#include "menu02.h"

void writeLine(unsigned char length);
int writeText(unsigned char write);
int readText(unsigned char read);
int appendText(unsigned char append);

char filename[20];

int main()
{
    // Aktivierung von Umlauten
    system("chcp 1252\n\r");
    printf("\n\r");

    // Dateiname einlesen
    printf("Dateiname: ");

    if (scanf("%19s", filename) != 1)
    {
        printf("Fehler bei der Eingabe!");
        return -1;
    }

    // Menü in Dauerschleife
    char operation[3] = "q";
    do
    {
        system("cls");

        printf("Menü:\n\r");
        writeLine(30);
        printf("-> 1.) Schreiben\n\r"
            "-> 2.) Lesen\n\r"
            "-> 3.) Anhängen\n\r");
        writeLine(30);
       
        printf("Eingabe: ");
        scanf("%1s", operation);

        if (scanf("%1s", operation) != 1)
            system("cls");
        {
            printf("Fehler bei der Eingabe!\n\r");
            return -1;
        }

        int eingabe;

        switch (filename[20])
        {
        case '1':
            writeText(filename[20]);
            printf("Texteingabe: ");
            scanf("%s", eingabe);
            break;

        case '2':
            readText(filename[20]);
            break;

        case '3':
            appendText(filename[20]);
            break;
            printf("Texteimgabe: ");
            scanf("%s", eingabe);

        case '4':
            printf("Terminating\n\r");
            break;

        default:
            printf("Operation not permitted\n\r");
            break;
        }
    } while (operation[0] != '$');
}

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
int writeText(unsigned char write)
{
    FILE* filePointer;

    filePointer = fopen(filename, "w");


    if (filePointer == NULL)
    {
        printf("Datei konnte nicht geöffnet werden!\n\r");
        return-1;
    }

    char letter = 0;
    do
    {
        letter = getchar();
        fputc(letter, filePointer);

    } while (letter != '$');

    fclose(filePointer);
}


// Lesen eines Textes
int readText(unsigned char read)
{
    FILE* filePointer;
    char temp;

    filePointer = fopen(filename, "r"); // Öffnet das Dokument, damit anschließend darauf geschrieben werden kann.

    if (filePointer == NULL)
    {
        printf("Datei konnte nicht geöffnet werden!\n\r"); // Fehlermeldung bei falscher Eingabe   
        return -1;
    }

    while ((temp = fgetc(filePointer)) != EOF)
    {
        putchar(temp);
    }
    fclose(filePointer);
}


// Erweitern eines Textes
int appendText(unsigned char append)
{
    FILE* filePointer;
    char temp;

    filePointer = fopen(filename, "a"); // Öffnet das Dokument, damit anschließend darauf geschrieben werden kann.

    if (filePointer == NULL)
    {
        printf("Datei konnte nicht geöffnet werden!\n\r"); // Fehlermeldung bei falscher Eingabe   
        return -1;
    
    }

    while ((temp = fgetc(filePointer)) != EOF)
    {
        putchar(temp);
    }
    fclose(filePointer);
}