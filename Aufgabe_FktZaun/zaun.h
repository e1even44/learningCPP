#pragma once

#define LINE_SYMBOL '*'

// Das *.h File enth�lt
// => Pr�prozessoranweisung
// => Ben�tigte Standardbibliotheken (Includes)
// => Prototypen  

// Ben�tigte Standardbibliotheken
#include <stdlib.h>
#include <stdio.h>


// Prototypen der in *.c File definierten Funktionen

void Zeichnen(int zahl1, int zahl2); // Prototyp: Zaun zeichnen
int Umfang(int zahl1, int zahl2); // Prototyp: Umfang berechnen 
int FInhalt(int zahl1, int zahl2); // Prototyp: Fl�cheninhalt berechnen

