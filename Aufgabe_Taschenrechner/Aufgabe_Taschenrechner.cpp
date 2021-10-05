#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string>
#include <math.h>


int Addition(int zahl1, int zahl2);
int Subtraktion(int zahl1, int zahl2);
int Multiplikation(int zahl1, int zahl2);
int Division(int zahl1, int zahl2);
void draw(unsigned char length);

int main()
{
    // Aktivierung von Umlauten
    system("chcp 1252\n\r");
    printf("\n\r");

    char operation[4];              // Plus, Minus, Mal, Geteilt
    int zahl1;
    int zahl2;

    do
    {
        printf("\n\rTASCHENRECHNER\n\r");
        draw(50);
        printf("Addition: +\n\r"
            "Subtraktion: -\n\r"
            "Multiplikation: *\n\r"
            "Division: /\n\r");
        draw(50);

        printf("\n\rOperation: ");
        scanf("%c", operation);
    
        draw(50);
        printf("Geben Sie zwei Zahlen ein.\n\r");
        printf("Erste Zahl: ");
        scanf("%i", &zahl1);
        printf("Zweite Zahl: ");
        scanf("%i", &zahl2);


        int sum = Addition(zahl1, zahl2);
        int sub = Subtraktion(zahl1, zahl2);
        int mult = Multiplikation(zahl1, zahl2);
        int div = Division(zahl1, zahl2);

        switch (operation[0])
        {
        case '+':

            printf("Summe: %i", sum);
            break;

        case '-':
            printf("Differenz: %i", sub);
            break;

        case'*':
            printf("Produkt: %i", mult);
            break;

        case'/':
            printf("Quotient: %i", div);
            break;

        default:
            printf("Fehler: Die Eingabe entspricht nicht den oben angeführten Optionen.\n\r");
            return 0;
        }

    } while (operation[0]);
       printf("\033[2J\033[1;1H");
       draw(50);
}


int Addition(int zahl1, int zahl2)
{
    return (zahl1 + zahl2);
}
  

int Subtraktion(int zahl1, int zahl2)
{
    return(zahl1 - zahl2);
}

int Multiplikation(int zahl1, int zahl2)
{
    return(zahl1 * zahl2);
}

int Division(int zahl1, int zahl2)
{
    return(zahl1 / zahl2);
}

void draw(unsigned char length)
{
    for (unsigned char i = 0; i < length; i++)
    {
        printf(".");
    }
    printf("\n\r");
}