#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string>

int main()
{
    // Aktivierung von Umlauten
    system("chcp 1252\n\r");
    printf("\n\r");

    printf("\t\n\r. . . . M e n u . . . .\t\n\n\r\r");

    int dateiname;
    printf("Bitte geben sie einen Dateinamen ein: ");
    scanf("%s", &dateiname);

    FILE* filePointer;

    while (true)
    {
        printf("\n\r\n\r===============\n\r\n\r"
            "1.) Schreiben\n\r"
            "2.) Lesen\n\r"
            "3.) Anhaengen\n\r"
            "4.) Beenden\n\r\n\r"
        "===============\n\r");


       unsigned char kommando = 0;
        printf("\n\rBitte treffen Sie eine Entscheidung: ");
        scanf("%s", &kommando);

       printf("\033[2J\033[1;1H");

        FILE* filePointer;
        char letter = 0;
        char temp;


        switch (kommando)
        {
        case '1':
            filePointer = fopen("&eingabe", "w");

            if (filePointer == NULL)
            {
                printf("Datei konnte nicht geöffnet werden!\n\r");
                return -1;
            }

            do
            {
                letter = getchar();
                fputc(letter, filePointer);

            } while (letter != '$');

            fclose(filePointer);
            break;

            case '2':
            filePointer = fopen("&dateiname", "r");

            if (filePointer == NULL)
            {
                printf("Datei konnte nicht geöffnet werden!\n\r");
                return -1;
            }

            while ((temp = fgetc(filePointer)) != EOF)
            {
                putchar(temp);
            }

            fclose(filePointer);
            break;

        case '3':
            filePointer = fopen("&dateiname", "r");

            if (filePointer == NULL)
            {
                printf("Datei konnte nicht geöffnet werden!\n\r");
                return -1;
            }

            while ((temp = fgetc(filePointer)) != EOF)
            {
                putchar(temp);
            }

            filePointer = fopen("&dateiname", "w");

            if (filePointer == NULL)
            {
                printf("Datei konnte nicht geöffnet werden!\n\r");
                return -1;
            }

            do
            {
                letter = getchar();
                fputc(letter, filePointer);

            } while (letter != '$');

            fclose(filePointer);
            break;

        default:
            printf("Keine der Bedingungen trifft zu!");
            break;
        }
    }




}
