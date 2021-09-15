#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

int main()
{
    while (true)
    {
        int day = 0;
        int month = 0;
        int year = 0;
        printf("Tag: ");
        scanf("%i", &day);
        printf("Monat: ");
        scanf("%i", &month);
        printf("Jahr: ");
        scanf("%i", &year);
        int a = (year - 1);
        int d = day;
        if (month > 1)
        {
            d += 31;
        }
        if (month > 2)
        {
            d += 28;
        }
        if (month > 3)
        {
            d += 31;
        }
        if (month > 4)
        {
            d += 30;
        }
        if (month > 5)
        {
            d += 31;
        }
        if (month > 6)
        {
            d += 30;
        }
        if (month > 7)
        {
            d += 31;
        }
        if (month > 8)
        {
            d += 31;
        }
        if (month > 9)
        {
            d += 30;
        }
        if (month > 10)
        {
            d += 31;
        }
        if (month > 11)
        {
            d += 30;
        }
        int weekday = (a + (int)(a / 4) - (int)(a / 100) + (int)(a / 400) + d) % 7;
        char days[][11] = {
            {"Sonntag"},
            {"Montag"},
            {"Dienstag"},
            {"Mittwoch"},
            {"Donnerstag"},
            {"Freitag"},
            {"Samstag"}
        };
        printf("Wochentag am %2i.%2i.%4i: (%i)->%s\n\r", day, month, year, weekday, days[weekday]);
    }



}


