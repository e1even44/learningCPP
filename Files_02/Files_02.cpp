#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string>

int main()
{
    // Aktivierung von Umlauten
    system("chcp 1252\n\r");
    printf("\n\r");

    printf("Textausgabe: ");

    FILE* filePointer;

    /*
    File Modis:
    r      -> read, lesem *
    w      -> write, schreiben *
    a      -> anhängen *
    b      -> binary
    t      -> text
    */


    filePointer = fopen("text.txt", "r");

    if (filePointer == NULL)
    {
        printf("Datei konnte nicht geöffnet werden!\n\r");
        return -1;
    }

    char temp;
    while ((temp = fgetc(filePointer)) != EOF)
    {
        putchar(temp);
    }

    fclose(filePointer);

}