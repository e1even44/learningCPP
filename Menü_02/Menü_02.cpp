#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string>

void writeLine(unsigned char length);
void writeText(unsigned char write);
void readText(unsigned char read);
void appendText(unsigned char append);

char filename[20];

int main()
{
    // Aktivierung von Umlauten
    system("chcp 1252\n\r");
    printf("\n\r");

    // Dateiname einlesen
    printf("Dateiname: ");
    if (scanf("%s", filename) != 1)
    {
        printf("Fehler bei der Eingabe!");
        return -1;
    }

    // Menü in Dauerschleife

    char operation[3] = "q";

    do
    {
        system("cls"); // Console leeren

        printf("Menü:\n\r");
        writeLine(30);
        printf(" -> 1.) Schreiben\n\r"
            "-> 2.) Lesen\n\r"
            "-> 3.) Anhängen\n\r"
            " -> 4.) Beenden\n\r");
        writeLine(30);
        printf("Eingabe: ");
        if (scanf("%1s", operation) != 1)
        {
            printf("Fehler bei der Eingabe!\n\r");
            return-1;
        }

        switch (operation[0])
        {
        case '1':
            writeText(operation[1]);
            break;

        case '2':
            readText(operation[2]);
            break;

        case '3':
            appendText(operation[3]);
            break;

        case '4':
            printf("Terminating\n\r");
            break;

        default:
            printf("Operation not permitted\n\r");
            break;
        }
       
    } while (operation[0] != 'q');
}

 void writeLine(unsigned char length) // Zeichnen von Zeichen über und unter dem Menü
 {
    for (unsigned char i = 0; i < length; i++)
    {
        printf("=");
    }
    printf("\n\r");
 }

 void writeText(unsigned char write) // Schreiben eines Textes
 {
     FILE* filePointer;
     char operation;
     char temp;

     filePointer = fopen(filename, "w"); // Öffnet das Dokument, damit anschlißend darauf geschrieben werden kann.
     
     if (filePointer == NULL) 
     {
         printf("Datei konnte nicht geöffnet werden!\n\r"); // Fehlermeldung bei falscher Eingabe
     }

     do
     {
         operation = getchar();
         fputc(operation, filePointer);
     } while (operation != '$');

     fclose(filePointer);
 }


 void readText(unsigned char read) // Lesen eines Textes
 {
     FILE* filePointer;
     char operation;
     char temp;

     filePointer = fopen(filename, "r"); // Öffnet das Dokument, damit anschließend darauf geschrieben werden kann.

     if (filePointer == NULL)
     {
         printf("Datei konnte nicht geöffnet werden!\n\r"); // Fehlermeldung bei falscher Eingabe   
     }

     while ((temp = fgetc(filePointer)) != EOF)
     {
         putchar(temp);
     }

     fclose(filePointer);
 }


 void appendText(unsigned char append) // Erweitern eines Textes.
 {
     FILE* filePointer;
     char operation;
     char temp;

     filePointer = fopen(filename, "r");

     if (filePointer == NULL)
     {
         printf("Datei konnte nicht geöffnet werden!\n\r");
        
     }

     while ((temp = fgetc(filePointer)) != EOF)
     {
         putchar(temp);
     }

     filePointer = fopen(filename, "w");

     if (filePointer == NULL)
     {
         printf("Datei konnte nicht geöffnet werden!\n\r");
     }
     do
     {
         operation = getchar();
         fputc(operation, filePointer);

     } while (operation != '$');

     fclose(filePointer);

 }
//void quit