#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string>
#include "menu02.h"

char filename[20];

int main()
{
    // Aktivierung von Umlauten
    system("chcp 1252\n\r");
    printf("\n\r");

    // Dateiname einlesen
    printf("Dateiname: ");
    scanf("%s", filename);

    if (scanf("%19s", filename) != 1)
    {
     printf("Fehler bei der Eingabe!");
     return 0;;
    }

    // Menü in Dauerschleife
   char operation[3] = "$";
   do
   {
       printf("\n\rMenue:\n\r");
       writeLine(30);
       printf("-> 1.) Schreiben\n\r"
           "-> 2.) Lesen\n\r"
           "-> 3.) Anhaengen\n\r"
           "-> 4.) Beenden\n\r"
       "    -> B.) Zeile bearbeten\n\r"
       "    -> L.) Zeile loeschen\n\r");
        writeLine(30);
       
        printf("Eingabe: ");
        scanf("%s", operation);

      /*  if (scanf("%1s", operation) != 1)
            system("cls");
        {
            printf("Fehler bei der Eingabe!\n\r");
            return -1;
        }*/

        printf("\033[2J\033[1;1H");

        switch (operation[0])
        {
        case '1':
            writeText(filename);
            break;

        case '2':
            readText(filename);
            break;

        case '3':
            appendText(filename);
            break;

        case '4':
            printf("Programm wird beendet ...\n\r");
            exit(0);
            return 0;
            break;

   /*     case 'B':
            set(filename);
            break;

        case 'L':
            set(filename);
            break;*/

        default:
            printf("Operation not permitted\n\r");
            break;
        }

    } while (operation[0] != 'q');

}