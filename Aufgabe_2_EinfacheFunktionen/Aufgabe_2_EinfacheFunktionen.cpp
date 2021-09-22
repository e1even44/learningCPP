#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string>

// Benutzerbibliotheken
#include "line.h"


int main()
{
	// Aktivieren von Umlauten
	system("chcp 1252");
	printf("\n\r");

	Line(20);

	Line2(20, '?');
}
