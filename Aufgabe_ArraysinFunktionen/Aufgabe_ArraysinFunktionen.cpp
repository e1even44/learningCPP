#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>

unsigned int getLength(char* data);
unsigned int getWords(char* data);

   char data[200];

   int main()
    {
    // Aktivierung von Umlauten
    system("chcp 1252\n\r");
    printf("\n\r");
 
    printf("\n\rGeben Sie ein Wort/einen Satz ein: ");
    //fgets(data, 100, stdin);

    // Lösung 1: Mithilfe vom Internet
   /* printf("\n\rDie Eingabe hat %u Zeichen.\n", (unsigned)strlen(data)-1);
    return 0;*/
 

    //Lösung 2: Auflösung

    // Eingabe beschränken auf 0-0 und a-Z und SPACE
    if (scanf("%199[0-9a-zA-Z ]", data) !=1)
    {
        printf("Input Error\n\r");
        return -1;
    }
  
    printf("Textläge: %u Zeichen\n\r", getLength(data));
    printf("Anzahl der Wörter: %u\n\r", getWords(data));
   }


   unsigned int getLength(char* data)
   {
       int i = 0;
       while (*data != '\0')
       {
           data++,
            i++;
       }
       return i;
   }

   unsigned int getWords(char* data)
   {
       int i = 1;
       while (*data != '\0')
       {
           if (*data == ' ')
           {
               i++;
           }
           data++;
       }
       return i;
    }