#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "reverse.h"
#include "reverse.h"
#include <string>


int main()
{
    char word[20];
    int temp = 0;
    int len = 0;
    int i = 0, j = 0;
  

    printf(". . . . forwards / backwards . . . .\n\r");

    printf("\n\rPlease enter one word: ");
    scanf("%s", word);

  
    printf("\n\rWord Reversed: %s\n", word);
    printf("\n\r");


    // Vergleich, ob das Wort vorwärts und rückwärts gleich ist.
   unsigned int back = Reverse(word);
    if (word == back)
    {
        printf("Wort ist Palindrom!");
    }
    else
    {
        printf("Wort ist kein Palindrom!");
    }

}



