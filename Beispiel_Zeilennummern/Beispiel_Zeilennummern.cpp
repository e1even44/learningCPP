#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string>

int main(int argc, char* argv[])
{
	char readlines[255]; // Variable zum Lesen und Schreiben der Datei.
	int zahler; // Für die Nummer der Zeilen. (1:, 2:,3: ...)
	zahler = 0;
	FILE* fp; // Pointer zum Lesen
	FILE* fp2; //Pointer zum Schreiben

	fp = fopen("text.txt", "r"); // Offnen der Datei text.txt, die ich schon erstellt und etwas reingeschrieben habe.
	fp2 = fopen("textoutput.txt", "w"); // File zum schreiben

	if (fp == NULL)
	{
		printf("Fehler beim Oeffnen der Datei %s\n", "text.txt");
		return 1;
	}
	if (fp2 == NULL)
	{
		printf("Fehler beim Schreiben der Datei %s\n", "text.txt");
		return 1;
	}

	while (!feof(fp)) // lesen bis zum End of File
	{
		fgets(readlines, 255, fp); // Zeilen lesen
		printf("%s", readlines);	 // Zeilen ausgeben
		zahler = zahler + 1; // Zeile mitzählen
		fprintf(fp2, "%i: %s", zahler, readlines);  // zeile in die Datei schreiben

	}
	fclose(fp); // schliessen
	fclose(fp2);
	return 0;
}