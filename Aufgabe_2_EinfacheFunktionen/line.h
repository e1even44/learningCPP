#pragma once

// Das *.h File enthält
// => Präprozessoranweisung
// => Benötigte Standardbibliotheken (Includes)
// => Prototypen  


// Zu verwendendes Symbol (Präprozessoranweisung)
#define LINE_SYMBOL '#'

// Benötigte Standardbibliotheken
#include <stdio.h>

// Prototypen der in *.c File definierten Funktionen
void Line(unsigned char length);

void Line2(unsigned char length, char symbol);

