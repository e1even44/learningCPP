
#include "read.h"

int read_int(const char* text)
{
	int temp = 0;

	printf("%s", text);

	if (scanf("%i", &temp) != 1)
	{
		printf("Eingabefehler!\n\r");
		exit(-1);
	}
	return temp;
}

unsigned int read_unit(const char* text)
{
	unsigned int temp = 0;

	printf("%s", text);

	if (scanf("%u", &temp) != 1)
	{
		printf("Eingabefehler!\n\r");
		exit(-1);
	}
	return temp;
}