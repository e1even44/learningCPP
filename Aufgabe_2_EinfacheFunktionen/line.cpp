
// Es wird lediglich ein Verweis auf das Header File *.h ben�tigt
// Alle ben�tigten Pr�prozessoranweisungen und Bibliotheken befinden
// sich darin.

#include "line.h"

// Hier werden die Prototypen ausprogrammiert.
void Line(unsigned char length)
{
	for (unsigned char i = 0; i < length; i++)
	{
		printf("%c", LINE_SYMBOL);
	}
	printf("\n\r");
}

void Line2(unsigned char length, char symbol)
{
	for (unsigned char i = 0; i < length; i++)
	{
		printf("%c", symbol);
	}
	printf("\n\r");

}