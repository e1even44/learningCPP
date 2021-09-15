#define LINE 80
#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string>
#include <limits.h>
#include <float.h>

void line(unsigned char size);

int main()
{
	//Aktivieren von Umlauten
	system("chcp 1252");
	printf("\n\r");

	printf("Groesse und Speicherplatz von Variablen\n\n\r");

	printf("Datentyp\t\tByte\tMin\t\t\t\tMax\n\r");
	line(LINE);

	//Unsigned Datentypen:
	printf("unsigned char\t\t%u\t\%u\t\t\t\t%u\n\r",		sizeof(unsigned char),		0, UCHAR_MAX);
	printf("unsigned int\t\t%u\t\%u\t\t\t\t%u\n\r",			sizeof(unsigned int),		0, UINT_MAX);
	printf("unsigned long\t\t%u\t\%u\t\t\t\t%lu\n\r",		sizeof(unsigned long),		0, ULONG_MAX);
	printf("unsigned long long\t%u\t\%u\t\t\t\t%llu\n\r",	sizeof(unsigned long long),	0, ULLONG_MAX);

	printf("\n\r");

	//Signed Datentypen:
	printf("char\t\t\t%u\t\%i\t\t\t\t%i\n\r",	sizeof(char),		SCHAR_MIN, SCHAR_MAX);
	printf("int\t\t\t%u\t\%i\t\t\t\t%i\n\r",	sizeof(int),		INTMAX_MIN, INTMAX_MAX);
	printf("long\t\t\t%u\t\%li\t\t\t%li\n\r",	sizeof(long),		LONG_MIN, LONG_MAX);
	printf("long long\t\t%u\t\%lli\t\t%lli\n\r",sizeof(long long),	LLONG_MIN, LLONG_MAX);

	printf("\n\r");

	//Fixed-Point und Gleitkommazahlen
	printf("float\t\t\t%u\t\%e\t\t\t%e\n\r", sizeof(float),		FLT_MIN, FLT_MAX);
	printf("double\t\t\t%u\t\%e\t\t\t%e\n\r", sizeof(double),	DBL_MIN, DBL_MAX);

}



void line(unsigned char size)
{
	for (unsigned char i = 0; i < size; i++)
	{
		printf("#");
	}
	printf("\n\r");
}

