#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string>

int main()
{
    // Aktivierung von Umlauten
    system("chcp 1252\n\r");
    printf("\n\r");

    printf("Texteingabe: ");

    FILE* filePointer;

    filePointer = fopen("text.txt", "w");


    if (filePointer == NULL)
    {
        printf("Datei konnte nicht geöffnet werden!\n\r");
        return -1;
    }

    char letter = 0;
    do
    {
    letter = getchar();
    fputc(letter, filePointer);

    } while (letter != '1');

    fclose(filePointer);

}


