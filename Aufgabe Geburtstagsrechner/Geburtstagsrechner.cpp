#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

int main()
{
   unsigned int day;
   unsigned int month;
   unsigned int year;

   printf("Tag:  ");
   scanf("%u", &day);
   printf("Monat:  ");
   scanf("%u", &month);
   printf("Jahr:  ");
   scanf("%u", &year);

   unsigned int a = (year - 1);

   unsigned int d = 0;

   //MONAT

   if (month <= 1)
   {
       d += 31;
   }

   if (month <= 2)
   {
       d += 28;
   }

   if (month <= 3)
   {
       d += 31;
   }

   if (month <= 4)
   {
       d += 30;
   }

   if (month <= 5)
   {
       d += 31;
   }

   if (month <= 6)
   {
       d += 30;
   }

   if (month <= 7)
   {
       d += 31;
   }

   if (month <= 8)
   {
       d += 31;
   }

   if (month <= 9)
   {
       d += 30;
   }

   if (month <= 10)
   {
       d += 31;
   }

   if (month <= 11)
   {
       d += 30;
   }

   if (month <= 12)
   {
       d += 31;
   }



   unsigned int wochentag = (year-1 + (int)(year-1 / 4) - (int)(year-1/ 100) + (int)(year-1/ 400) + day) % 7;

   //WOCHENTAG

   if (wochentag <= 0)
   {
       printf("Sie sind geboren am: Sonntag\n\r");
   }

   if (wochentag <= 1)
   {
       printf("Sie sind geboren am: Montag\n\r");
   }

   if (wochentag <= 2)
   {
       printf("Sie sind geboren am: Dienstag\n\r");
   }

   if (wochentag <= 3)
   {
       printf("Sie sind geboren am: Mittwoch\n\r");
   }

   if (wochentag <= 4)
   {
       printf("Sie sind geboren am: Donnerstag\n\r");
   }

   if (wochentag <= 5)
   {
       printf("Sie sind geboren am: Freitag\n\r");
   }

   if (wochentag <= 6)
   {
       printf("Sie sind geboren am: Samstag\n\r");
   }





}